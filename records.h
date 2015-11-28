//Arquivo que organiza e manipula os recordes conseguidos no jogo

//Diretivas de compilação para impedir que o arquivo seja declarado duas vezes
#ifndef RECORDS_H
#define RECORDS_H

#include <stdio.h>
#include <string.h>
#include "conio21/conio2.h"

#include "constants.h"
#include "records_struct.h"
#include "persistence.h"

//Função que inicializa as estruturas de um array
void initStructs(recordes records[]);

//TODO - Documentar função
void read_new_record(int pontos);

//TODO - Documentar função
void printRecords();

//TODO - Documentar função
void organizarecordes (recordes recorde[]);

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
    int flag = 0;

    readRecordsFromFile(records);

    if (pontos > (records[MAXRECORDS - 1]).pontos) //Caso a pontuação do jogador for maior que a do ultimo jogador entra aqui
    {
        gotoxy(59, 18);
        textbackground(LIGHTGRAY);
        textcolor(BLACK);
        printf("Novo Recorde!\n");
        textbackground(BLACK);
        textcolor(LIGHTGRAY);
        gotoxy(53, 20);
        printf("Insira seu nome:\n");
        gotoxy(53, 21);
        fflush (stdin);
        fgets((records[MAXRECORDS - 1]).nome, 25, stdin); // Para não dar erro na leitura no nome do jogador.
        records[MAXRECORDS - 1].pontos = pontos; // Coloca o ponto do jogador no campo correto
        organizarecordes(records); //Organiza os records com sua respectiva ordem depois da alteração
        writeRecordsToFile(records); // Escreve no arquivo
    }
}


void printRecords() //Função para printar os records na tela definida pra isso
{
    recordes final[MAXRECORDS];
    int cont;
    int pos = 0; //Para ir avançando as posições em que são imprimidos os recordes

    initStructs(final); // Os espaços que ainda não tem pontuação fica com espaço e pontos "0"
    readRecordsFromFile(final);//Carregar os recordes realizados com suas respectivas posições

    for (cont = 0; cont < MAXRECORDS; cont++)
    {
        gotoxy(18, 12 + pos); // Posição em que é imprimido os recordes
        printf("%02d |                              | %09d", cont + 1, final[cont].pontos);
        gotoxy(22, 12 + pos);
        printf("%28s", final[cont].nome );
        pos = pos +3;
    }

}


void organizarecordes (recordes recorde[]) //Buble sort para organizar os recordes na ordem certa
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
