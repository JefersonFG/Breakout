//Arquivo com as funções que manipulam dados que permanecem na memória do computador, em arquivos txt

#include <stdio.h>

//Defines com os nomes dos arquivos
#define GAMESCREEN "game_screen.txt"
#define RECORDSSCREEN "records_screen.txt"
#define RECORDS "records.txt"

//Função que abre o arquivo contendo a tela de jogo
void openGameScreenFile()
{
    //Declaração de variáveis
    FILE *gameScreen;

    //Abre o arquivo em modo de leitura, pois ele contém somente a tela de fundo do jogo
    gameScreen = fopen(GAMESCREEN, "r");

    //Verifica se não houve erro na abertura do arquivo, caso tenha ocorrido um erro informa na tela
    if (gameScreen == NULL) {
        printf("Ocorreu um erro ao carregar a tela de jogo!");
    }
}
