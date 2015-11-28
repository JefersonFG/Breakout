//Arquivo que organiza e manipula os recordes conseguidos no jogo

//Diretivas de compilação para impedir que o arquivo seja declarado duas vezes
#ifndef RECORDS_H
#define RECORDS_H

#include <stdio.h>
#include <string.h>

#include "constants.h"
#include "records_struct.h"
#include "persistence.h"

//Função que inicializa as estruturas de um array
void initStructs(recordes records[]);

//TODO - Documentar função
void read_new_record(recordes comparar);

//TODO - Documentar função
void printRecords();

void initStructs (recordes records[])
{
    //Declaração de variáveis
    int i = 0;

    //Inicializa as MAXRECORDES estruturas com nome " " e pontuação 0
    for (i = 0; i < MAXRECORDS; i++) {
        strcpy(records[i].nome, " ");
        records[i].pontos = 0;
    }
}

void read_new_record(int pontos)
{
     recordes records[MAXRECORDS];

     readRecordsFromFile(records);

     if (pontos > (records[MAXRECORDS - 1]).pontos)
     {
         printf("Insira seu nome: ");
         fflush (stdin);
         fgets((records[MAXRECORDS - 1]).nome, 15, stdin); // Para não dar erro na leitura no nome do jogador.
         (records[MAXRECORDS - 1]).pontos = pontos; // Coloca o ponto do jogador no campo correto
         organizarecordes(records); //Organiza os records com sua respectiva ordem depois da alteração
         writeRecordsToFile(records); // Escreve no arquivo
     }
}


void printRecords() //Função para printar os records na tela definida pra isso
{
    recordes final[MAXRECORDS];
    int cont;

    readRecordsFromFile(final);

    printf("RECORDES"); //Modificar fonte e colocar no meio da tela
    for (cont = 0; cont < MAXRECORDS; cont++)
    {
        Printf("%s   %d", final[cont].nome, final[cont].pontos);
    }

}


void organizarecordes (recordes recorde[])
{
    recordes aux;
    int cont1;
    int cont2;
    int k = MAXRECORDS - 1;

    for (cont1 = 0; cont1 < MAXRECORDS; cont1++)
    {
        for(cont2 = 0; cont2 < k; cont2++)
        {
            if(recorde[cont2].pontos < recorde[cont2+1].pontos)
            {
                aux = recorde[cont2];
                recorde[cont2] = recorde[cont2+1];
                recorde[cont2+1] = aux;
            }
        }
        k--;
    }

}

#endif //RECORDS_H
