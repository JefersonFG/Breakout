//Arquivo com as funções que manipulam dados que permanecem na memória do computador, em arquivos txt

#include <stdio.h>

//Defines com os nomes dos arquivos
#define GAMESCREEN "..\\..\\Breakout\\game_screen.txt"
#define RECORDSSCREEN "../../Breakout/records_screen.txt"
#define RECORDS "../../Breakout/records.txt"

//Defines com as dimensões da tela
#define WIDTH 80
#define HEIGHT 40

//Função que abre o arquivo contendo a tela de jogo
void openGameScreenFile(char conteudo[][40])
{
    //Declaração de variáveis
    FILE *gameScreen;
    int i = 0;

    //Abre o arquivo em modo de leitura, pois ele contém somente a tela de fundo do jogo
    gameScreen = fopen(GAMESCREEN, "r");

    //Verifica se não houve erro na abertura do arquivo, caso tenha ocorrido um erro informa na tela
    if (gameScreen == NULL) {
        printf("Ocorreu um erro ao carregar a tela de jogo!");
    } else {
        //Lê o conteúdo do arquivo e salva na variável conteudo
        for (i = 0; i < HEIGHT; i++) {
            fgets(conteudo[i], sizeof(conteudo[0]), gameScreen);
        }
    }

    //Fecha o arquivo após a leitura
    fclose(gameScreen);
}
