//Arquivo com as funções que manipulam dados que permanecem na memória do computador, em arquivos txt

//Diretivas de compilação para impedir que o arquivo seja declarado duas vezes
#ifndef PERSISTENCE_H
#define PERSISTENCE_H

#include <stdio.h>
#include <string.h>

#include "constants.h"
#include "records_struct.h"

//Função que abre o nível de jogo correspondente
void readGameLevelFile(int level, char gameLevel[][LEVEL_FILE_WIDTH]);

//Função que lê os recordes do jogo do arquivo de recordes
void readRecordsFromFile(recordes records[]);

//Função que salva os novos recordes do jogo no arquivo de recordes
void writeRecordsToFile(recordes records[]);

void readGameLevelFile(int level, char gameLevel[][LEVEL_FILE_WIDTH])
{
    //Declaração de variáveis
    char filePath[100] = " ";
    char buffer[100] = " ";
    FILE *gameFile;
    int i = 0;

    //Verifica qual o nível de jogo a carregar
    switch (level) {
    case 1:
        strcpy(filePath, GAME_LEVEL_1);
        break;
    default:
        printf("Ocorreu um erro no carregamento do nível de jogo\n");
        strcpy(filePath, NULL);
    }

    //Verifica se não houve erros, se houver indica erro retornando NULL em gameLevel
    if (filePath != NULL) {
        //Abre o arquivo em modo de leitura, pois ele contém somente a tela de fundo do jogo
        gameFile = fopen(filePath, "r");

        //Verifica se não houve erro na abertura do arquivo, caso tenha ocorrido um erro informa na tela
        if (gameFile == NULL) {
            perror("Ocorreu um erro ao carregar a tela de jogo\n");
        } else {
            //Lê o conteúdo do arquivo e salva na variável conteudo
            for (i = 0; i < LEVEL_FILE_HEIGHT; i++) {
                fgets(gameLevel[i], LEVEL_FILE_WIDTH, gameFile);
            }

            //Fecha o arquivo após a leitura
            fclose(gameFile);
        }
    } else {
        gameLevel = NULL;
    }
}

void readRecordsFromFile(recordes records[])
{
    //Declaração de variáveis
    FILE *recordsFile;
    int i = 0;

    //Abre o arquivo em modo de leitura, para obter os recordes anteriores
    recordsFile = fopen(RECORDS, "rb");

    //Verifica se não houve erro na abertura do arquivo, caso tenha ocorrido um erro informa na tela
    if (recordsFile == NULL) {
        perror("Ocorreu um erro ao carregar a tela de recordes\n");
    } else {
        //Lê um máximo de MAXRECORDES de estruturas de recordes, e salva em recordes
        while ((i < MAXRECORDS) && (!feof(recordsFile))) {
            fread(&records[i], sizeof(recordes), 1, recordsFile);
            i++;
        }

        //Fecha o arquivo após a leitura
        fclose(recordsFile);
    }
}

void writeRecordsToFile(recordes records[])
{
    //Declaração de variáveis
    FILE *recordsFile;
    int i = 0;

    //Abre o arquivo em modo de escrita, pois irá salvar os novos recordes
    recordsFile = fopen(RECORDS, "wb");

    //Verifica se não houve erro na abertura do arquivo, caso tenha ocorrido um erro informa na tela
    if (recordsFile == NULL) {
        perror("Ocorreu um erro ao carregar a tela de recordes\n");
    } else {
        //Salva os recordes no arquivo
        for (i = 0; i < MAXRECORDS; i++) {
            fwrite(&records[i], sizeof(recordes), 1, recordsFile);
        }

        //Fecha o arquivo após a leitura
        fclose(recordsFile);
    }
}

#endif //PERSISTENCE_H
