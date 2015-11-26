//Arquivo com as funções que manipulam dados que permanecem na memória do computador, em arquivos txt

#include <stdio.h>

#include "constants.h"
#include "records_struct.h"

//Função que lê os recordes do jogo do arquivo de recordes
void readRecordsFromFile(struct recorde recordes[]);

//Função que salva os novos recordes do jogo no arquivo de recordes
void writeRecordsToFile(struct recorde recordes[]);

void readRecordsFromFile(struct recorde recordes[])
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
            fread(&recordes[i], sizeof(struct recorde), 1, recordsFile);
            i++;
        }

        //Fecha o arquivo após a leitura
        fclose(recordsFile);
    }
}

void writeRecordsToFile(struct recorde recordes[])
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
            fwrite(&recordes[i], sizeof(struct recorde), 1, recordsFile);
        }

        //Fecha o arquivo após a leitura
        fclose(recordsFile);
    }
}
