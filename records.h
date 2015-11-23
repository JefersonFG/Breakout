//Arquivo que organiza e manipula os recordes conseguidos no jogo

#include <stdio.h>

#include "constants.h"
#include "records_struct.h"

//Função que inicializa as estruturas de um array
void initStructs(struct recorde recordes[]);

//TODO - Documentar função
void readRecords(struct recorde comparar);

//TODO - Documentar função
void printRecords();

void initStructs(struct recorde recordes[])
{
    //Declaração de variáveis
    int i = 0;

    //Inicializa as MAXRECORDES estruturas com nome " " e pontuação 0
    for (i = 0; i < MAXRECORDS; i++) {
        recordes[i].nome = " ";
        recordes[i].pontos = 0;
    }
}

void readRecords(struct recorde comparar)
{
    if(comparar.pontos > jogador.pontos)
    {
        jogador.pontos = comparar.pontos;
    }

}

void printRecords()
{
    //
}
