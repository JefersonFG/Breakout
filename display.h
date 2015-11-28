//Arquivo com as funções que exibem informações na tela, como o fundo do jogo e dos menus

//Diretivas de compilação para impedir que o arquivo seja declarado duas vezes
#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdio.h>
#include "conio21/conio2.h"

#include "constants.h"
#include "persistence.h"

//Função que apaga o cursor da tela
void hideCursor();

//Função que exibe o menu principal
void showMenu();

//Função que exibe a tela principal do jogo
void showGameScreen();

//Função que exibe a tela de recordes do jogo
void showRecordsScreen();

//Função que finaliza o programa
void showClosingScreen();

void hideCursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void showMenu()
{
    //Variáveis que serão utilizadas
    int i = 0;

    //Inicia limpando a tela da aplicação
    clrscr();

    //Imprime a tela principal linha a linha

    //Linha 1
    printf("%c", CSUPESQ);
    for (i = 1; i < 79; i++) { printf("%c", MHOR); }
    printf("%c", CSUPDIR);

    //Linha 2
    printf("%c", MVERT);
    for (i = 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 3
    printf("%c", MVERT);
    for (i = 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 4
    printf("%c", MVERT);
    for (i = 1; i < 6; i++) { printf("%c", ESPACO); }
    for (i; i < 15; i++) { printf("%c", LETRAO); }
    for (i; i < 22; i++) { printf("%c", ESPACO); }
    for (i; i < 29; i++) { printf("%c", LETRAO); }
    for (i; i < 34; i++) { printf("%c", ESPACO); }
    for (i; i < 44; i++) { printf("%c", LETRAO); }
    for (i; i < 51; i++) { printf("%c", ESPACO); }
    for (i; i < 56; i++) { printf("%c", LETRAO); }
    for (i; i < 63; i++) { printf("%c", ESPACO); }
    for (i; i < 66; i++) { printf("%c", LETRAO); }
    for (i; i < 72; i++) { printf("%c", ESPACO); }
    for (i; i < 74; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 5
    printf("%c", MVERT);
    for (i = 1; i < 6; i++) { printf("%c", ESPACO); }
    for (i; i < 16; i++) { printf("%c", LETRAO); }
    for (i; i < 22; i++) { printf("%c", ESPACO); }
    for (i; i < 30; i++) { printf("%c", LETRAO); }
    for (i; i < 34; i++) { printf("%c", ESPACO); }
    for (i; i < 44; i++) { printf("%c", LETRAO); }
    for (i; i < 50; i++) { printf("%c", ESPACO); }
    for (i; i < 57; i++) { printf("%c", LETRAO); }
    for (i; i < 63; i++) { printf("%c", ESPACO); }
    for (i; i < 66; i++) { printf("%c", LETRAO); }
    for (i; i < 70; i++) { printf("%c", ESPACO); }
    for (i; i < 74; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 6
    printf("%c", MVERT);
    for (i = 1; i < 6; i++) { printf("%c", ESPACO); }
    for (i; i < 9; i++) { printf("%c", LETRAO); }
    for (i; i < 14; i++) { printf("%c", ESPACO); }
    for (i; i < 17; i++) { printf("%c", LETRAO); }
    for (i; i < 22; i++) { printf("%c", ESPACO); }
    for (i; i < 25; i++) { printf("%c", LETRAO); }
    for (i; i < 28; i++) { printf("%c", ESPACO); }
    for (i; i < 31; i++) { printf("%c", LETRAO); }
    for (i; i < 34; i++) { printf("%c", ESPACO); }
    for (i; i < 37; i++) { printf("%c", LETRAO); }
    for (i; i < 50; i++) { printf("%c", ESPACO); }
    for (i; i < 53; i++) { printf("%c", LETRAO); }
    for (i; i < 54; i++) { printf("%c", ESPACO); }
    for (i; i < 57; i++) { printf("%c", LETRAO); }
    for (i; i < 63; i++) { printf("%c", ESPACO); }
    for (i; i < 66; i++) { printf("%c", LETRAO); }
    for (i; i < 68; i++) { printf("%c", ESPACO); }
    for (i; i < 72; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 7
    printf("%c", MVERT);
    for (i = 1; i < 6; i++) { printf("%c", ESPACO); }
    for (i; i < 9; i++) { printf("%c", LETRAO); }
    for (i; i < 14; i++) { printf("%c", ESPACO); }
    for (i; i < 17; i++) { printf("%c", LETRAO); }
    for (i; i < 22; i++) { printf("%c", ESPACO); }
    for (i; i < 25; i++) { printf("%c", LETRAO); }
    for (i; i < 28; i++) { printf("%c", ESPACO); }
    for (i; i < 31; i++) { printf("%c", LETRAO); }
    for (i; i < 34; i++) { printf("%c", ESPACO); }
    for (i; i < 37; i++) { printf("%c", LETRAO); }
    for (i; i < 49; i++) { printf("%c", ESPACO); }
    for (i; i < 52; i++) { printf("%c", LETRAO); }
    for (i; i < 55; i++) { printf("%c", ESPACO); }
    for (i; i < 58; i++) { printf("%c", LETRAO); }
    for (i; i < 63; i++) { printf("%c", ESPACO); }
    for (i; i < 70; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 8
    printf("%c", MVERT);
    for (i = 1; i < 6; i++) { printf("%c", ESPACO); }
    for (i; i < 16; i++) { printf("%c", LETRAO); }
    for (i; i < 22; i++) { printf("%c", ESPACO); }
    for (i; i < 29; i++) { printf("%c", LETRAO); }
    for (i; i < 34; i++) { printf("%c", ESPACO); }
    for (i; i < 41; i++) { printf("%c", LETRAO); }
    for (i; i < 48; i++) { printf("%c", ESPACO); }
    for (i; i < 51; i++) { printf("%c", LETRAO); }
    for (i; i < 56; i++) { printf("%c", ESPACO); }
    for (i; i < 59; i++) { printf("%c", LETRAO); }
    for (i; i < 63; i++) { printf("%c", ESPACO); }
    for (i; i < 68; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 9
    printf("%c", MVERT);
    for (i = 1; i < 6; i++) { printf("%c", ESPACO); }
    for (i; i < 9; i++) { printf("%c", LETRAO); }
    for (i; i < 14; i++) { printf("%c", ESPACO); }
    for (i; i < 17; i++) { printf("%c", LETRAO); }
    for (i; i < 22; i++) { printf("%c", ESPACO); }
    for (i; i < 25; i++) { printf("%c", LETRAO); }
    for (i; i < 27; i++) { printf("%c", ESPACO); }
    for (i; i < 30; i++) { printf("%c", LETRAO); }
    for (i; i < 34; i++) { printf("%c", ESPACO); }
    for (i; i < 41; i++) { printf("%c", LETRAO); }
    for (i; i < 48; i++) { printf("%c", ESPACO); }
    for (i; i < 59; i++) { printf("%c", LETRAO); }
    for (i; i < 63; i++) { printf("%c", ESPACO); }
    for (i; i < 70; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 10
    printf("%c", MVERT);
    for (i = 1; i < 6; i++) { printf("%c", ESPACO); }
    for (i; i < 9; i++) { printf("%c", LETRAO); }
    for (i; i < 14; i++) { printf("%c", ESPACO); }
    for (i; i < 17; i++) { printf("%c", LETRAO); }
    for (i; i < 22; i++) { printf("%c", ESPACO); }
    for (i; i < 25; i++) { printf("%c", LETRAO); }
    for (i; i < 28; i++) { printf("%c", ESPACO); }
    for (i; i < 31; i++) { printf("%c", LETRAO); }
    for (i; i < 34; i++) { printf("%c", ESPACO); }
    for (i; i < 37; i++) { printf("%c", LETRAO); }
    for (i; i < 47; i++) { printf("%c", ESPACO); }
    for (i; i < 60; i++) { printf("%c", LETRAO); }
    for (i; i < 63; i++) { printf("%c", ESPACO); }
    for (i; i < 66; i++) { printf("%c", LETRAO); }
    for (i; i < 68; i++) { printf("%c", ESPACO); }
    for (i; i < 72; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 11
    printf("%c", MVERT);
    for (i = 1; i < 6; i++) { printf("%c", ESPACO); }
    for (i; i < 16; i++) { printf("%c", LETRAO); }
    for (i; i < 22; i++) { printf("%c", ESPACO); }
    for (i; i < 25; i++) { printf("%c", LETRAO); }
    for (i; i < 28; i++) { printf("%c", ESPACO); }
    for (i; i < 31; i++) { printf("%c", LETRAO); }
    for (i; i < 34; i++) { printf("%c", ESPACO); }
    for (i; i < 44; i++) { printf("%c", LETRAO); }
    for (i; i < 47; i++) { printf("%c", ESPACO); }
    for (i; i < 50; i++) { printf("%c", LETRAO); }
    for (i; i < 57; i++) { printf("%c", ESPACO); }
    for (i; i < 60; i++) { printf("%c", LETRAO); }
    for (i; i < 63; i++) { printf("%c", ESPACO); }
    for (i; i < 66; i++) { printf("%c", LETRAO); }
    for (i; i < 70; i++) { printf("%c", ESPACO); }
    for (i; i < 74; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 12
    printf("%c", MVERT);
    for (i = 1; i < 6; i++) { printf("%c", ESPACO); }
    for (i; i < 15; i++) { printf("%c", LETRAO); }
    for (i; i < 22; i++) { printf("%c", ESPACO); }
    for (i; i < 25; i++) { printf("%c", LETRAO); }
    for (i; i < 28; i++) { printf("%c", ESPACO); }
    for (i; i < 31; i++) { printf("%c", LETRAO); }
    for (i; i < 34; i++) { printf("%c", ESPACO); }
    for (i; i < 44; i++) { printf("%c", LETRAO); }
    for (i; i < 46; i++) { printf("%c", ESPACO); }
    for (i; i < 49; i++) { printf("%c", LETRAO); }
    for (i; i < 58; i++) { printf("%c", ESPACO); }
    for (i; i < 61; i++) { printf("%c", LETRAO); }
    for (i; i < 63; i++) { printf("%c", ESPACO); }
    for (i; i < 66; i++) { printf("%c", LETRAO); }
    for (i; i < 72; i++) { printf("%c", ESPACO); }
    for (i; i < 74; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 13
    printf("%c", MVERT);
    for (i = 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 14
    printf("%c", MVERT);
    for (i = 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 15
    printf("%c", MVERT);
    for (i = 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //linha 16
    printf("%c", MVERT);
    for (i = 1; i < 27; i++) { printf("%c", ESPACO); }
    printf("%c", CSUPESQ);
    for (i = 28; i < 52; i++) { printf("%c", MHOR); }
    printf("%c", CSUPDIR);
    for (i = 53; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 17
    printf("%c", MVERT);
    for (i = 1; i < 27; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 28; i < 52; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 53; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 18
    printf("%c", MVERT);
    for (i = 1; i < 27; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", ESPACO);
    printf("Novo Jogo");
    for (i = 38; i < 52; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 53; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 19
    printf("%c", MVERT);
    for (i = 1; i < 27; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", ESPACO);
    printf("Recordes");
    for (i = 37; i < 52; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 53; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 20
    printf("%c", MVERT);
    for (i = 1; i < 27; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", ESPACO);
    printf("Sair");
    for (i = 33; i < 52; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 53; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 21
    printf("%c", MVERT);
    for (i = 1; i < 27; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 28; i < 52; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 53; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 22
    printf("%c", MVERT);
    for (i = 1; i < 27; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 28; i < 52; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 53; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 23
    printf("%c", MVERT);
    for (i = 1; i < 27; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 28; i < 52; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 53; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 24
    printf("%c", MVERT);
    for (i = 1; i < 27; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 28; i < 52; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = 53; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //linha 25
    printf("%c", MVERT);
    for (i = 1; i < 27; i++) { printf("%c", ESPACO); }
    printf("%c", CINFESQ);
    for (i = 28; i < 52; i++) { printf("%c", MHOR); }
    printf("%c", CINFDIR);
    for (i = 53; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 26
    printf("%c", MVERT);
    for (i = 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 27
    printf("%c", MVERT);
    for (i = 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 28
    printf("%c", MVERT);
    for (i = 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 29
    printf("%c", MVERT);
    for (i = 1; i < 18; i++) { printf("%c", ESPACO); }
    for (i; i < 25; i++) { printf("%c", LETRAO); }
    for (i; i < 33; i++) { printf("%c", ESPACO); }
    for (i; i < 36; i++) { printf("%c", LETRAO); }
    for (i; i < 40; i++) { printf("%c", ESPACO); }
    for (i; i < 43; i++) { printf("%c", LETRAO); }
    for (i; i < 47; i++) { printf("%c", ESPACO); }
    for (i; i < 62; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 30
    printf("%c", MVERT);
    for (i = 1; i < 17; i++) { printf("%c", ESPACO); }
    for (i; i < 26; i++) { printf("%c", LETRAO); }
    for (i; i < 33; i++) { printf("%c", ESPACO); }
    for (i; i < 36; i++) { printf("%c", LETRAO); }
    for (i; i < 40; i++) { printf("%c", ESPACO); }
    for (i; i < 43; i++) { printf("%c", LETRAO); }
    for (i; i < 47; i++) { printf("%c", ESPACO); }
    for (i; i < 62; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 31
    printf("%c", MVERT);
    for (i = 1; i < 16; i++) { printf("%c", ESPACO); }
    for (i; i < 20; i++) { printf("%c", LETRAO); }
    for (i; i < 23; i++) { printf("%c", ESPACO); }
    for (i; i < 27; i++) { printf("%c", LETRAO); }
    for (i; i < 33; i++) { printf("%c", ESPACO); }
    for (i; i < 36; i++) { printf("%c", LETRAO); }
    for (i; i < 40; i++) { printf("%c", ESPACO); }
    for (i; i < 43; i++) { printf("%c", LETRAO); }
    for (i; i < 53; i++) { printf("%c", ESPACO); }
    for (i; i < 56; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 32
    printf("%c", MVERT);
    for (i = 1; i < 16; i++) { printf("%c", ESPACO); }
    for (i; i < 19; i++) { printf("%c", LETRAO); }
    for (i; i < 24; i++) { printf("%c", ESPACO); }
    for (i; i < 27; i++) { printf("%c", LETRAO); }
    for (i; i < 33; i++) { printf("%c", ESPACO); }
    for (i; i < 36; i++) { printf("%c", LETRAO); }
    for (i; i < 40; i++) { printf("%c", ESPACO); }
    for (i; i < 43; i++) { printf("%c", LETRAO); }
    for (i; i < 53; i++) { printf("%c", ESPACO); }
    for (i; i < 56; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 33
    printf("%c", MVERT);
    for (i = 1; i < 16; i++) { printf("%c", ESPACO); }
    for (i; i < 19; i++) { printf("%c", LETRAO); }
    for (i; i < 24; i++) { printf("%c", ESPACO); }
    for (i; i < 27; i++) { printf("%c", LETRAO); }
    for (i; i < 33; i++) { printf("%c", ESPACO); }
    for (i; i < 36; i++) { printf("%c", LETRAO); }
    for (i; i < 40; i++) { printf("%c", ESPACO); }
    for (i; i < 43; i++) { printf("%c", LETRAO); }
    for (i; i < 53; i++) { printf("%c", ESPACO); }
    for (i; i < 56; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 34
    printf("%c", MVERT);
    for (i = 1; i < 16; i++) { printf("%c", ESPACO); }
    for (i; i < 19; i++) { printf("%c", LETRAO); }
    for (i; i < 24; i++) { printf("%c", ESPACO); }
    for (i; i < 27; i++) { printf("%c", LETRAO); }
    for (i; i < 33; i++) { printf("%c", ESPACO); }
    for (i; i < 36; i++) { printf("%c", LETRAO); }
    for (i; i < 40; i++) { printf("%c", ESPACO); }
    for (i; i < 43; i++) { printf("%c", LETRAO); }
    for (i; i < 53; i++) { printf("%c", ESPACO); }
    for (i; i < 56; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 35
    printf("%c", MVERT);
    for (i = 1; i < 16; i++) { printf("%c", ESPACO); }
    for (i; i < 20; i++) { printf("%c", LETRAO); }
    for (i; i < 23; i++) { printf("%c", ESPACO); }
    for (i; i < 27; i++) { printf("%c", LETRAO); }
    for (i; i < 33; i++) { printf("%c", ESPACO); }
    for (i; i < 37; i++) { printf("%c", LETRAO); }
    for (i; i < 39; i++) { printf("%c", ESPACO); }
    for (i; i < 43; i++) { printf("%c", LETRAO); }
    for (i; i < 53; i++) { printf("%c", ESPACO); }
    for (i; i < 56; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 36
    printf("%c", MVERT);
    for (i = 1; i < 17; i++) { printf("%c", ESPACO); }
    for (i; i < 26; i++) { printf("%c", LETRAO); }
    for (i; i < 34; i++) { printf("%c", ESPACO); }
    for (i; i < 42; i++) { printf("%c", LETRAO); }
    for (i; i < 53; i++) { printf("%c", ESPACO); }
    for (i; i < 56; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 37
    printf("%c", MVERT);
    for (i = 1; i < 18; i++) { printf("%c", ESPACO); }
    for (i; i < 25; i++) { printf("%c", LETRAO); }
    for (i; i < 35; i++) { printf("%c", ESPACO); }
    for (i; i < 41; i++) { printf("%c", LETRAO); }
    for (i; i < 53; i++) { printf("%c", ESPACO); }
    for (i; i < 56; i++) { printf("%c", LETRAO); }
    for (i; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 38
    printf("%c", MVERT);
    for (i = 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 39
    printf("%c", MVERT);
    for (i = 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 40
    printf("%c", CINFESQ);
    for (i = 1; i < 79; i++) { printf("%c", MHOR); }
    printf("%c", CINFDIR);
}

void showGameScreen()
{
    //Declaração de variáveis
    int i = 0;

    //Inicia limpando a tela da aplicação
    clrscr();

    //Imprime a tela de fundo do jogo linha a linha

    //Linha 1
    printf("%c", CSUPESQ);
    for (i = 1; i < 49; i++) { printf("%c", MHOR); }
    printf("%c", CSUPDIR);
    printf("%c", CSUPESQ);
    for (i = i + 2; i < 79; i++) { printf("%c", MHOR); }
    printf("%c", CSUPDIR);

    //Linha 2
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 61; i++) { printf("%c", ESPACO); }
    textcolor(GREEN);
    printf("PLAYER 1");
    for (i = i + 8; i < 79; i++) { printf("%c", ESPACO); }
    textcolor(LIGHTGRAY);
    printf("%c", MVERT);

    //Linha 3
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 4
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 53; i++) { printf("%c", ESPACO); }
    printf("LIFE:");
    for (i = i + 5; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 5
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 53; i++) { printf("%c", ESPACO); }
    printf("%c", CSUPESQ);
    for (i = i + 1; i < 76; i++) { printf("%c", MHOR); }
    printf("%c", CSUPDIR);
    for (i = i + 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 6
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 53; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = i + 1; i < 76; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = i + 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 7
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 53; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = i + 1; i < 76; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    for (i = i + 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 8
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 53; i++) { printf("%c", ESPACO); }
    printf("%c", CINFESQ);
    for (i = i + 1; i < 76; i++) { printf("%c", MHOR); }
    printf("%c", CINFDIR);
    for (i = i + 1; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 9
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 10
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 11
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 53; i++) { printf("%c", ESPACO); }
    printf("SCORE:");
    for (i = i + 6; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 12
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 13
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 14
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", CINFESQ);
    for (i = i + 2; i < 79; i++) { printf("%c", MHOR); }
    printf("%c", CINFDIR);

    //Linha 15
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", CSUPESQ);
    for (i = i + 2; i < 79; i++) { printf("%c", MHOR); }
    printf("%c", CSUPDIR);

    //linha 16
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 52; i++) { printf("%c", ESPACO); }
    textbackground(CYAN);
    textcolor(BLACK);
    printf("         BREAKOUT         ");
    textbackground(BLACK);
    textcolor(LIGHTGRAY);
    for (i = i + 26; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 17
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 18
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 19
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 20
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 21
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 22
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 23
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 24
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //linha 25
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 26
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 27
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 28
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 29
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 30
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 31
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 32
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 33
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 34
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 35
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 36
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 37
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 38
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 39
    printf("%c", MVERT);
    for (i = 1; i < 49; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);
    printf("%c", MVERT);
    for (i = i + 2; i < 79; i++) { printf("%c", ESPACO); }
    printf("%c", MVERT);

    //Linha 40
    printf("%c", CINFESQ);
    for (i = 1; i < 49; i++) { printf("%c", MHOR); }
    printf("%c", CINFDIR);
    printf("%c", CINFESQ);
    for (i = i + 2; i < 79; i++) { printf("%c", MHOR); }
    printf("%c", CINFDIR);
}

void showRecordsScreen()
{
    //Declaração de variáveis
    int i = 0;

    //Inicia limpando a tela da aplicação
    clrscr();

    //Imprime a tela de fundo do jogo linha a linha

    //Linha 1
    printf("%c", CSUPESQ);
    for (i = 1; i < 79; i++) { printf("%c", MHOR); }
    printf("%c", CSUPDIR);

    //Linha 2
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 3
    printf("%c", MVERT);
    for(i = 1; i < 17; i++) { printf("%c", ESPACO);}
    for(i; i < 20; i++) {printf("%c", LETRAO);}
    for(i; i < 23; i++) {printf("%c", ESPACO);}
    for(i; i < 27; i++) {printf("%c", LETRAO);}
    for(i; i < 30; i++) {printf("%c", ESPACO);}
    for(i; i < 33; i++) {printf("%c", LETRAO);}
    for(i; i < 36; i++) {printf("%c", ESPACO);}
    for(i; i < 38; i++) {printf("%c", LETRAO);}
    for(i; i < 42; i++) {printf("%c", ESPACO);}
    for(i; i < 45; i++) {printf("%c", LETRAO);}
    for(i; i < 48; i++) {printf("%c", ESPACO);}
    for(i; i < 50; i++) {printf("%c", LETRAO);}
    for(i; i < 54; i++) {printf("%c", ESPACO);}
    for(i; i < 58; i++) {printf("%c", LETRAO);}
    for(i; i < 60; i++) {printf("%c", ESPACO);}
    for(i; i < 64; i++) {printf("%c", LETRAO);}
    for(i; i < 79; i++) {printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 4
    printf("%c", MVERT);
    for(i = 1; i < 17; i++) { printf("%c", ESPACO);}
    for(i; i < 18; i++) {printf("%c", LETRAO);}
    for(i; i < 20; i++) { printf("%c", ESPACO);}
    for(i; i < 21; i++) {printf("%c", LETRAO);}
    for(i; i < 23; i++) {printf("%c", ESPACO);}
    for(i; i < 24; i++) {printf("%c", LETRAO);}
    for(i; i < 29; i++) {printf("%c", ESPACO);}
    for(i; i < 30; i++) {printf("%c", LETRAO);}
    for(i; i < 35; i++) {printf("%c", ESPACO);}
    for(i; i < 36; i++) {printf("%c", LETRAO);}
    for(i; i < 38; i++) {printf("%c", ESPACO);}
    for(i; i < 39; i++) {printf("%c", LETRAO);}
    for(i; i < 42; i++) {printf("%c", ESPACO);}
    for(i; i < 43; i++) {printf("%c", LETRAO);}
    for(i; i < 45; i++) {printf("%c", ESPACO);}
    for(i; i < 46; i++) {printf("%c", LETRAO);}
    for(i; i < 48; i++) {printf("%c", ESPACO);}
    for(i; i < 49; i++) {printf("%c", LETRAO);}
    for(i; i < 50; i++) {printf("%c", ESPACO);}
    for(i; i < 51; i++) {printf("%c", LETRAO);}
    for(i; i < 54; i++) {printf("%c", ESPACO);}
    for(i; i < 55; i++) {printf("%c", LETRAO);}
    for(i; i < 60; i++) {printf("%c", ESPACO);}
    for(i; i < 61; i++) {printf("%c", LETRAO);}
    for(i; i < 79; i++) {printf("%c", ESPACO);}
    printf("%c", MVERT);


    //Linha 5
    printf("%c", MVERT);
    for(i = 1; i < 17; i++) { printf("%c", ESPACO);}
    for(i; i < 20; i++) {printf("%c", LETRAO);}
    for(i; i < 23; i++) {printf("%c", ESPACO);}
    for(i; i < 26; i++) {printf("%c", LETRAO);}
    for(i; i < 29; i++) {printf("%c", ESPACO);}
    for(i; i < 30; i++) {printf("%c", LETRAO);}
    for(i; i < 35; i++) {printf("%c", ESPACO);}
    for(i; i < 36; i++) {printf("%c", LETRAO);}
    for(i; i < 38; i++) {printf("%c", ESPACO);}
    for(i; i < 39; i++) {printf("%c", LETRAO);}
    for(i; i < 42; i++) {printf("%c", ESPACO);}
    for(i; i < 45; i++) {printf("%c", LETRAO);}
    for(i; i < 48; i++) {printf("%c", ESPACO);}
    for(i; i < 49; i++) {printf("%c", LETRAO);}
    for(i; i < 51; i++) {printf("%c", ESPACO);}
    for(i; i < 52; i++) {printf("%c", LETRAO);}
    for(i; i < 54; i++) {printf("%c", ESPACO);}
    for(i; i < 57; i++) {printf("%c", LETRAO);}
    for(i; i < 60; i++) {printf("%c", ESPACO);}
    for(i; i < 64; i++) {printf("%c", LETRAO);}
    for(i; i < 79; i++) {printf("%c", ESPACO);}
    printf("%c", MVERT);


    //Linha 6
    printf("%c", MVERT);
    for(i = 1; i < 17; i++) { printf("%c", ESPACO);}
    for(i; i < 18; i++) {printf("%c", LETRAO);}
    for(i; i < 19; i++) { printf("%c", ESPACO);}
    for(i; i < 20; i++) {printf("%c", LETRAO);}
    for(i; i < 23; i++) {printf("%c", ESPACO);}
    for(i; i < 24; i++) {printf("%c", LETRAO);}
    for(i; i < 29; i++) {printf("%c", ESPACO);}
    for(i; i < 30; i++) {printf("%c", LETRAO);}
    for(i; i < 35; i++) {printf("%c", ESPACO);}
    for(i; i < 36; i++) {printf("%c", LETRAO);}
    for(i; i < 38; i++) {printf("%c", ESPACO);}
    for(i; i < 39; i++) {printf("%c", LETRAO);}
    for(i; i < 42; i++) {printf("%c", ESPACO);}
    for(i; i < 43; i++) {printf("%c", LETRAO);}
    for(i; i < 44; i++) {printf("%c", ESPACO);}
    for(i; i < 45; i++) {printf("%c", LETRAO);}
    for(i; i < 48; i++) {printf("%c", ESPACO);}
    for(i; i < 49; i++) {printf("%c", LETRAO);}
    for(i; i < 50; i++) {printf("%c", ESPACO);}
    for(i; i < 51; i++) {printf("%c", LETRAO);}
    for(i; i < 54; i++) {printf("%c", ESPACO);}
    for(i; i < 55; i++) {printf("%c", LETRAO);}
    for(i; i < 63; i++) {printf("%c", ESPACO);}
    for(i; i < 64; i++) {printf("%c", LETRAO);}
    for(i; i < 79; i++) {printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 7
    printf("%c", MVERT);
    for(i = 1; i < 17; i++) { printf("%c", ESPACO);}
    for(i; i < 18; i++) {printf("%c", LETRAO);}
    for(i; i < 20; i++) { printf("%c", ESPACO);}
    for(i; i < 21; i++) {printf("%c", LETRAO);}
    for(i; i < 23; i++) {printf("%c", ESPACO);}
    for(i; i < 27; i++) {printf("%c", LETRAO);}
    for(i; i < 30; i++) {printf("%c", ESPACO);}
    for(i; i < 33; i++) {printf("%c", LETRAO);}
    for(i; i < 36; i++) {printf("%c", ESPACO);}
    for(i; i < 38; i++) {printf("%c", LETRAO);}
    for(i; i < 42; i++) {printf("%c", ESPACO);}
    for(i; i < 43; i++) {printf("%c", LETRAO);}
    for(i; i < 45; i++) { printf("%c", ESPACO);}
    for(i; i < 46; i++) {printf("%c", LETRAO);}
    for(i; i < 48; i++) {printf("%c", ESPACO);}
    for(i; i < 50; i++) {printf("%c", LETRAO);}
    for(i; i < 54; i++) {printf("%c", ESPACO);}
    for(i; i < 58; i++) {printf("%c", LETRAO);}
    for(i; i < 60; i++) {printf("%c", ESPACO);}
    for(i; i < 64; i++) {printf("%c", LETRAO);}
    for(i; i < 79; i++) {printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 8
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 9
    printf("%c", CINFESQ);
    for (i = 1; i < 79; i++) { printf("%c", MHOR); }
    printf("%c", CINFDIR);

    //Linha 10
    printf("%c", CSUPESQ);
    for (i = 1; i < 79; i++) { printf("%c", MHOR); }
    printf("%c", CSUPDIR);

    //Linha 11
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 12
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 13
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 14
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 15
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 16
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 17
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 18
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 19
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 20
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 21
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);


    //Linha 22
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 23
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 24
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 25
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 26
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 27
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 28
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 29
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 30
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 31
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 32
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 33
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 34
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 35
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 36
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 37
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 38
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 39
    printf("%c", MVERT);
    for(i = 1; i < 79; i++) { printf("%c", ESPACO);}
    printf("%c", MVERT);

    //Linha 40
    printf("%c", CINFESQ);
    for (i = 1; i < 79; i++) { printf("%c", MHOR); }
    printf("%c", CINFDIR);
}

void showClosingScreen()
{
    //Limpa a tela
    clrscr();

    //Posiciona o cursor no centro da tela
    gotoxy(28,19);

    //Exibe a mensagem de fim de programa
    printf("Finalizando o programa...");

    //Posiciona o cursor no centro da tela novamente
    gotoxy(21,20);
}

#endif //DISPLAY_H
