//Arquivo contendo as funções que gerenciam o jogo em si, manipulando os controles e o comportamento

//Diretivas de compilação para impedir que o arquivo seja declarado duas vezes
#ifndef ENGINE_H
#define ENGINE_H

#include <stdio.h>
#include <stdbool.h>
#include "conio21/conio2.h"

#include "persistence.h"

//Tipo enumerado com as direções possíveis de movimento da bolinha
typedef enum {DUPRIGHT, DUPLEFT, DDOWNRIGHT, DDOWNLEFT} ballDirections;

//Estrutura com as coordenadas da base
typedef struct {
    int posX;
    int posY;
} baseCoordinates;

//Estrutura com as coordenadas da bolinha
typedef struct {
    int posX;
    int posY;
} ballCoordinates;

//Estrutura com as coordenadas dos blocos
typedef struct {
    int posX;
    int posY;
} blockCoordinates;

//Função que inicia o jogo e retorna os pontos do jogador ao final do jogo
int startGame();

//Função que carrega o nível do jogo e o exibe na tela, salvando as posições dos blocos
void showGameLevel(int level, blockCoordinates blockPositions[MAXBLOCKS]);

//Função que inicia a base e a bolinha
void initGameElements(ballDirections *ballDirection, baseCoordinates *basePos,
                      ballCoordinates *ballPos, char base[BASESIZE], char ball);

//Função que verifica o teclado para mover a base
void testMoveBase(baseCoordinates *basePos);

//Função que exibe a pontuação do jogador na tela
void showScore(int score);

//Função que exibe as vidas do jogador na tela
void showLives(int lives);

//Função que apaga a base e a bolinha da tela, para reiniciar
void cleanGameElements(baseCoordinates *basePos, ballCoordinates *ballPos);

//Função que verifica se a bolinha irá acertar um bloco
//Caso seja enviado positivo, retira o bloco da lista e o apaga da tela
bool testHitBlock(ballCoordinates ballNextPos, blockCoordinates blockPositions[MAXBLOCKS],
                  bool removeBlock);

//Função que verifica para onde a bolinha deve ir após encontrar um bloco
void redirectBall(ballDirections *ballDirection, ballCoordinates ballNextPos, ballCoordinates ballPos,
                  blockCoordinates blockPositions[MAXBLOCKS]);

int startGame()
{
    //Declaração de variáveis
    char base[BASESIZE];
    char ball = BALL;
    int lives = LIVES;
    int score = 0;
    ballDirections ballDirection;
    baseCoordinates basePos;
    ballCoordinates ballPos;
    ballCoordinates ballNextPos;
    blockCoordinates blockPositions[MAXBLOCKS];
    int i = 0;

    //Inicializa o vetor com a base do jogo
    for (i = 0; i < BASESIZE; i++) {
        base[i] = BASE;
    }

    //Inicializa o vetor com as posições dos blocos
    for (i = 0; i < MAXBLOCKS; i++) {
        blockPositions[i].posX = 0;
        blockPositions[i].posY = 0;
    }

    //Exibe a tela de jogo do nível 1
    showGameLevel(1, blockPositions);

    //Inicia a base e a bolinha
    initGameElements(&ballDirection, &basePos, &ballPos, base, &ball);

    //Inicia o loop principal do jogo
    while (lives > 0) {
        //Divide o delay entre cada movimento da bolinha em vários segmentos
        //Para poder testar a entrada do teclado entre cada um
        for (i = 0; i < DELAYPARTS; i++) {
            testMoveBase(&basePos);
            delay(DELAYTIME / DELAYPARTS);
        }

        //Exibe e atualiza a pontuação do jogador na tela
        showScore(score);

        //Exibe e atualiza as vidas do jogador na tela
        showLives(lives);

        //Verifica o sentido de movimento da bolinha e atualiza o ballNextPos
        switch (ballDirection) {
        case DUPRIGHT:
            ballNextPos.posX = ballPos.posX + 1;
            ballNextPos.posY = ballPos.posY - 1;
            break;
        case DUPLEFT:
            ballNextPos.posX = ballPos.posX - 1;
            ballNextPos.posY = ballPos.posY - 1;
            break;
        case DDOWNRIGHT:
            ballNextPos.posX = ballPos.posX + 1;
            ballNextPos.posY = ballPos.posY + 1;
            break;
        case DDOWNLEFT:
            ballNextPos.posX = ballPos.posX - 1;
            ballNextPos.posY = ballPos.posY + 1;
            break;
        default:
            //Informa que ocorreu um erro
            gotoxy(2,2);
            printf("Ocorreu um erro no programa!");
        }

        //Verifica o que está na próxima posição
        if (ballNextPos.posX == (LEVEL_FILE_WIDTH + 1)) {
            //Alcançou a lateral direita, portanto deve trocar o sentido de movimento
            if (ballDirection == DUPRIGHT) {
                ballDirection = DUPLEFT;
            } else if (ballDirection == DDOWNRIGHT) {
                ballDirection = DDOWNLEFT;
            }
        } else if (ballNextPos.posX == 1) {
            //Alcançou a lateral esquerda, portanto deve trocar o sentido de movimento
            if (ballDirection == DUPLEFT) {
                ballDirection = DUPRIGHT;
            } else if (ballDirection == DDOWNLEFT) {
                ballDirection = DDOWNRIGHT;
            }
        } else if (ballNextPos.posY == 1) {
            //Alcançou a borda de cima, portanto deve trocar o sentido de movimento
            if (ballDirection == DUPLEFT) {
                ballDirection = DDOWNLEFT;
            } else if (ballDirection == DUPRIGHT) {
                ballDirection = DDOWNRIGHT;
            }
        } else if (ballNextPos.posY == (LEVEL_FILE_HEIGHT + 1)) {
            //Alcançou a borda de baixo, portanto deve perder uma vida e reiniciar
            cleanGameElements(&basePos, &ballPos);
            initGameElements(&ballDirection, &basePos, &ballPos, base, &ball);
            lives--;
        } else if ((ballNextPos.posY == basePos.posY) && (ballNextPos.posX >= basePos.posX)
                   && (ballNextPos.posX < (basePos.posX + BASESIZE))) {
            //Encontrou a barra, deve rebater
            if (ballDirection == DDOWNLEFT) {
                ballDirection = DUPLEFT;
            } else if (ballDirection == DDOWNRIGHT) {
                ballDirection = DUPRIGHT;
            }
        } else if (testHitBlock(ballNextPos, blockPositions, true)) {
            //Houve colisão e o bloco já foi apagado, portanto a bolinha deve rebater
            redirectBall(&ballDirection, ballNextPos, ballPos, blockPositions);

            //Computa os pontos do bloco
            score += BLOCK_POINTS;
        } else {
            //Caso nenhuma exceção tenha acontecido, pode mover a bolinha
            gotoxy(ballPos.posX, ballPos.posY);
            printf("%c", ESPACO);

            //Atualiza a posição da bolinha
            ballPos = ballNextPos;

            gotoxy(ballPos.posX, ballPos.posY);
            printf("%c", ball);
        }
    }

    //Retorna a pontuação do usuário
    return score;
}

void showGameLevel(int level, blockCoordinates blockPositions[MAXBLOCKS])
{
    //Declaração de variáveis
    char gameLevel[LEVEL_FILE_HEIGHT][LEVEL_FILE_WIDTH];
    int i = 0, j = 0, k = 2, l = 0;

    //Lê o nível de jogo do arquivo
    readGameLevelFile(level, gameLevel);

    //Substitui os caracteres do arquivo pelos caracteres a serem exibidos na tela
    for (i = 0; i < LEVEL_FILE_HEIGHT; i++) {
        for (j = 0 ; j < LEVEL_FILE_WIDTH; j++) {
            if (gameLevel[i][j] == '-') {
                gameLevel[i][j] = ESPACO;
            } else if (gameLevel[i][j] == '@') {
                gameLevel[i][j] = BLOCK;
            }
        }
    }

    //Imprime o design do nível na tela
    //É necessário fazer um for de 2 em 2 pois o \n do fim de cada linha do arquivo pulou linhas na matriz
    for (i = 0; i < (LEVEL_FILE_HEIGHT - 1); i+=2) {
        gotoxy(2,k++);
        for (j = 0 ; j < (LEVEL_FILE_WIDTH - 1); j++) {
            //No caso dos blocos, imprime com fundo colorido
            if (gameLevel[i][j] == BLOCK) {
                textbackground(CYAN);
                textcolor(WHITE);

                printf("%c", gameLevel[i][j]);

                //Restaura as cores do terminal
                textbackground(BLACK);
                textcolor(LIGHTGRAY);

                //Salva a posição do bloco
                blockPositions[l].posX = 2 + j;
                blockPositions[l].posY = k - 1;
                l++;
            } else {
                //Do contrário, imprime normalmente
                printf("%c", gameLevel[i][j]);
            }
        }
    }
}

void initGameElements(ballDirections *ballDirection, baseCoordinates *basePos,
                      ballCoordinates *ballPos, char base[BASESIZE], char ball)
{
    //Declaração de variáveis
    int i = 0;

    //Inicia a bolinha movendo-a para cima, aleatoriamente para a direita ou para a esquerda
    *ballDirection = rand() % 2;

    //Inicializa os valores de posição da base
    basePos->posX = LEVEL_FILE_WIDTH / 2 - BASESIZE / 2; //Centraliza a base no eixo x
    basePos->posY = LEVEL_FILE_HEIGHT - 2;

    //Inicializa os valores de posição da bolinha
    ballPos->posX = LEVEL_FILE_WIDTH/2;
    ballPos->posY = LEVEL_FILE_HEIGHT - 15;

    //Imprime a base de jogo na tela
    gotoxy(basePos->posX, basePos->posY);

    //Troca a cor para impressão da base
    textbackground(GREEN);
    textcolor(WHITE);

    for (i = 0; i < BASESIZE; i++) {
        printf("%c", base[i]);
    }

    //Restaura as cores do terminal
    textbackground(BLACK);
    textcolor(LIGHTGRAY);

    //Imprime a bolinha na tela
    gotoxy(ballPos->posX, ballPos->posY);
    printf("%c", ball);
}

void testMoveBase(baseCoordinates *basePos)
{
    //Verifica se o usuário pressionou alguma tecla
    if (kbhit()) {
        //Obtém o dígito
        char keyPress = getch();

        //Quando pressionadas, as teclas de navegação colocam os seguintes valores no buffer:
        //-32 e 72 (cima) ou 80 (baixo) ou 77 (direita) ou 75 (esquerda)
        //O código abaixo verifica o primeiro caracter e testa o segundo
        //Isto é feito para evitar que outras teclas ativem a navegação
        if (keyPress == -32) {

            keyPress = getch();

            switch(keyPress) {
            case 77:
                //Tecla para direita
                if ((basePos->posX + BASESIZE - 1) < LEVEL_FILE_WIDTH) {
                    //Apaga o caracter da esquerda e imprime ele na direita
                    gotoxy(basePos->posX, basePos->posY);
                    printf(" ");

                    //Troca a cor para impressão da base
                    textbackground(GREEN);
                    textcolor(WHITE);

                    gotoxy((basePos->posX + BASESIZE), basePos->posY);
                    printf("%c", BASE);

                    //Restaura as cores do terminal
                    textbackground(BLACK);
                    textcolor(LIGHTGRAY);

                    //Atualiza a posição da base
                    (basePos->posX)++;
                }
                break;
            case 75:
                //Tecla para esquerda
                if ((basePos->posX - 1) > 1) {
                    //Apaga o caracter da direita e imprime ele na esquerda
                    gotoxy((basePos->posX + BASESIZE - 1), basePos->posY);
                    printf(" ");

                    //Troca a cor para impressão da base
                    textbackground(GREEN);
                    textcolor(WHITE);

                    gotoxy((basePos->posX - 1), basePos->posY);
                    printf("%c", BASE);

                    //Restaura as cores do terminal
                    textbackground(BLACK);
                    textcolor(LIGHTGRAY);

                    //Atualiza a posição da base
                    (basePos->posX)--;
                }
                break;
            }
        }
    }
}

void showScore(int score)
{
    //Exibe a pontuação do jogador
    gotoxy(53,11);
    printf("SCORE: %03d", score);
}

void showLives(int lives)
{
    //Declaração de variáveis
    int i = 0, j = 0;

    //Tamanho de cada vida. Há 21 espaços, portanto o tamanho máximo para cada vida é 21/LIVES
    int liveSize = 21 / LIVES;

    //Prepara o terminal para exibir as vidas
    textbackground(RED);

    //Exibe as vidas do jogador
    for (i = 0; i < lives; i++) {
        for (j = 0; j <= liveSize; j++) {
            gotoxy((55 + j + (i * liveSize)), 6);
            printf(" ");
            gotoxy((55 + j + (i * liveSize)), 7);
            printf(" ");
        }
    }

    //Restaura a cor de fundo do terminal
    textbackground(BLACK);

    //Verifica se já foram perdidas vidas
    if (lives != LIVES) {
        //Remove as vidas perdidas
        for (i = LIVES; i > lives; i--) {
            for (j = 21; j > (liveSize * lives); j--) {
                gotoxy((55 + j), 6);
                printf(" ");
                gotoxy((55 + j), 7);
                printf(" ");
            }
        }
    }
}

void cleanGameElements(baseCoordinates *basePos, ballCoordinates *ballPos)
{
    //Declaração de variáveis
    int i = 0;

    //Imprime espaços onde estava a base de jogo na tela
    gotoxy(basePos->posX, basePos->posY);

    for (i = 0; i < BASESIZE; i++) {
        printf("%c", ESPACO);
    }

    //Imprime espaço onde estava a bolinha na tela
    gotoxy(ballPos->posX, ballPos->posY);
    printf("%c", ESPACO);
}

bool testHitBlock(ballCoordinates ballNextPos, blockCoordinates blockPositions[MAXBLOCKS],
                  bool removeBlock)
{
    //Declaração de variáveis
    int i = 0;
    bool match = false;

    //Compara as posições da bola com as posições dos blocos
    for (i = 0; i < MAXBLOCKS; i++) {
        if ((ballNextPos.posX == blockPositions[i].posX)
                && (ballNextPos.posY == blockPositions[i].posY))
        {
            //A bolinha irá encontrar um bloco
            match = true;

            //Verifica se deve apagar o bloco
            if (removeBlock) {
                //Apaga o bloco da tela
                gotoxy(blockPositions[i].posX, blockPositions[i].posY);
                printf("%c", ESPACO);

                //Retira o bloco da lista
                blockPositions[i].posX = 0;
                blockPositions[i].posY = 0;
            }

            //Finaliza o loop
            i = MAXBLOCKS;
        }
    }

    //Retorna se houve colisão ou não
    return match;
}

void redirectBall(ballDirections *ballDirection, ballCoordinates ballNextPos,
                  ballCoordinates ballPos, blockCoordinates blockPositions[MAXBLOCKS])
{
    //Realiza a verificação completa de onde a bolinha deve ir
    if (*ballDirection == DUPLEFT) {
        //Verifica se existe um bloco na posição DDOWNLEFT
        ballNextPos.posX = ballPos.posX - 1;
        ballNextPos.posY = ballPos.posY + 1;

        //Se existir, a bolinha não pode ir nessa direção
        if (testHitBlock(ballNextPos, blockPositions, false)) {
            //Verifica se existe um bloco na posição DUPRIGHT
            ballNextPos.posX = ballPos.posX + 1;
            ballNextPos.posY = ballPos.posY - 1;

            //Se existir, a bolinha não pode ir nessa direção
            if (testHitBlock(ballNextPos, blockPositions, false)) {
                //Não podendo rebater para os outros lados, a bolinha rebate para trás
                *ballDirection = DDOWNRIGHT;
            } else {
                //Pode rebater para DUPRIGHT
                *ballDirection = DUPRIGHT;
            }
        } else {
            //Pode rebater para DDOWNLEFT
            *ballDirection = DDOWNLEFT;
        }
    } else if (*ballDirection == DUPRIGHT) {
        //Verifica se existe um bloco na posição DDOWNRIGHT
        ballNextPos.posX = ballPos.posX + 1;
        ballNextPos.posY = ballPos.posY + 1;

        //Se existir, a bolinha não pode ir nessa direção
        if (testHitBlock(ballNextPos, blockPositions, false)) {
            //Verifica se existe um bloco na posição DUPLEFT
            ballNextPos.posX = ballPos.posX - 1;
            ballNextPos.posY = ballPos.posY - 1;

            //Se existir, a bolinha não pode ir nessa direção
            if (testHitBlock(ballNextPos, blockPositions, false)) {
                //Não podendo rebater para os outros lados, a bolinha rebate para trás
                *ballDirection = DDOWNLEFT;
            } else {
                //Pode rebater para DUPRIGHT
                *ballDirection = DUPLEFT;
            }
        } else {
            //Pode rebater para DDOWNRIGHT
            *ballDirection = DDOWNRIGHT;
        }
    } else if (*ballDirection == DDOWNLEFT) {
        //Verifica se existe um bloco na posição DUPLEFT
        ballNextPos.posX = ballPos.posX - 1;
        ballNextPos.posY = ballPos.posY - 1;

        //Se existir, a bolinha não pode ir nessa direção
        if (testHitBlock(ballNextPos, blockPositions, false)) {
            //Verifica se existe um bloco na posição DDOWNRIGHT
            ballNextPos.posX = ballPos.posX + 1;
            ballNextPos.posY = ballPos.posY + 1;

            //Se existir, a bolinha não pode ir nessa direção
            if (testHitBlock(ballNextPos, blockPositions, false)) {
                //Não podendo rebater para os outros lados, a bolinha rebate para trás
                *ballDirection = DUPRIGHT;
            } else {
                //Pode rebater para DUPRIGHT
                *ballDirection = DDOWNRIGHT;
            }
        } else {
            //Pode rebater para DDOWNLEFT
            *ballDirection = DUPLEFT;
        }
    } else if (*ballDirection == DDOWNRIGHT) {
        //Verifica se existe um bloco na posição DUPRIGHT
        ballNextPos.posX = ballPos.posX + 1;
        ballNextPos.posY = ballPos.posY - 1;

        //Se existir, a bolinha não pode ir nessa direção
        if (testHitBlock(ballNextPos, blockPositions, false)) {
            //Verifica se existe um bloco na posição DDOWNLEFT
            ballNextPos.posX = ballPos.posX - 1;
            ballNextPos.posY = ballPos.posY + 1;

            //Se existir, a bolinha não pode ir nessa direção
            if (testHitBlock(ballNextPos, blockPositions, false)) {
                //Não podendo rebater para os outros lados, a bolinha rebate para trás
                *ballDirection = DUPLEFT;
            } else {
                //Pode rebater para DUPRIGHT
                *ballDirection = DDOWNLEFT;
            }
        } else {
            //Pode rebater para DDOWNLEFT
            *ballDirection = DUPRIGHT;
        }
    }
}

#endif //ENGINE_H
