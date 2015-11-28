//Arquivo contendo as funções que gerenciam o jogo em si, manipulando os controles e o comportamento

//Diretivas de compilação para impedir que o arquivo seja declarado duas vezes
#ifndef ENGINE_H
#define ENGINE_H

#include <stdio.h>
#include "conio21/conio2.h"

#include "persistence.h"

//Função que inicia o jogo
void startGame();

//Função que carrega o nível do jogo e o exibe na tela
void showGameLevel(int level);

void startGame()
{
    //Exibe a tela de jogo do nível 1
    showGameLevel(1);

    //Aguarda um caracter para sair da tela
    getch();
}

void showGameLevel(int level)
{
    //Declaração de variáveis
    char gameLevel[LEVEL_FILE_HEIGHT][LEVEL_FILE_WIDTH];
    int i = 0, j = 0, k = 2;

    //Lê o nível de jogo do arquivo
    readGameLevelFile(level, gameLevel);

    //Substitui os caracteres do arquivo pelos caracteres a serem exibidos na tela
    for (i = 0; i < LEVEL_FILE_HEIGHT; i++) {
        for (j = 0 ; j < LEVEL_FILE_WIDTH; j++) {
            if (gameLevel[i][j] == '-') {
                gameLevel[i][j] = ESPACO;
            } else if (gameLevel[i][j] == '@') {
                gameLevel[i][j] = BLOCO;
            }
        }
    }

    //Imprime o design do nível na tela
    //É necessário fazer um for de 2 em 2 pois o \n do fim de cada linha do arquivo pulou linhas na matriz
    for (i = 0; i < (LEVEL_FILE_HEIGHT - 1); i+=2) {
        gotoxy(2,k++);
        for (j = 0 ; j < (LEVEL_FILE_WIDTH - 1); j++) {
            //No caso dos blocos, imprime com fundo colorido
            if (gameLevel[i][j] == BLOCO) {
                textbackground(CYAN);
                textcolor(WHITE);

                printf("%c", gameLevel[i][j]);

                //Restaura as cores do terminal
                textbackground(BLACK);
                textcolor(LIGHTGRAY);
            } else {
                //Do contrário, imprime normalmente
                printf("%c", gameLevel[i][j]);
            }
        }
    }
}

#endif //ENGINE_H
