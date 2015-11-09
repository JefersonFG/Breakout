//Arquivo com as funções que exibem informações na tela, como o fundo do jogo e dos menus

#include <stdio.h>
#include <conio.h>
#include "conio21/conio2.h"

//Função que exibe o menu principal
void showMenu();

//Função que exibe a tela principal do jogo
void showGameScreen();

//Função que exibe a tela de recordes do jogo
void showRecordsScreen();

//Função que apaga o cursor da tela
void hidecursor()
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
    int i = 0;          //contador
    int cSupEsq = 218;  //'┌'
    int cSupDir = 191;  //'┐'
    int cInfEsq = 192;  //'└'
    int cInfDir = 217;  //'┘'
    int mVert = 179;    //'│'
    int mHor = 196;     //'─'
    int espaco = 255;   //' '
    int letraO = 111;   //'o'

    //Inicia limpando a tela da aplicação
    clrscr();

    //Linha 1
    printf("%c", cSupEsq);
    for (i = 1; i < 79; i++) { printf("%c", mHor); }
    printf("%c", cSupDir);

    //Linha 2
    printf("%c", mVert);
    for (i = 1; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 3
    printf("%c", mVert);
    for (i = 1; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 4
    printf("%c", mVert);
    for (i = 1; i < 6; i++) { printf("%c", espaco); }
    for (i; i < 15; i++) { printf("%c", letraO); }
    for (i; i < 22; i++) { printf("%c", espaco); }
    for (i; i < 29; i++) { printf("%c", letraO); }
    for (i; i < 34; i++) { printf("%c", espaco); }
    for (i; i < 44; i++) { printf("%c", letraO); }
    for (i; i < 51; i++) { printf("%c", espaco); }
    for (i; i < 56; i++) { printf("%c", letraO); }
    for (i; i < 63; i++) { printf("%c", espaco); }
    for (i; i < 66; i++) { printf("%c", letraO); }
    for (i; i < 72; i++) { printf("%c", espaco); }
    for (i; i < 74; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 5
    printf("%c", mVert);
    for (i = 1; i < 6; i++) { printf("%c", espaco); }
    for (i; i < 16; i++) { printf("%c", letraO); }
    for (i; i < 22; i++) { printf("%c", espaco); }
    for (i; i < 30; i++) { printf("%c", letraO); }
    for (i; i < 34; i++) { printf("%c", espaco); }
    for (i; i < 44; i++) { printf("%c", letraO); }
    for (i; i < 50; i++) { printf("%c", espaco); }
    for (i; i < 57; i++) { printf("%c", letraO); }
    for (i; i < 63; i++) { printf("%c", espaco); }
    for (i; i < 66; i++) { printf("%c", letraO); }
    for (i; i < 70; i++) { printf("%c", espaco); }
    for (i; i < 74; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 6
    printf("%c", mVert);
    for (i = 1; i < 6; i++) { printf("%c", espaco); }
    for (i; i < 9; i++) { printf("%c", letraO); }
    for (i; i < 14; i++) { printf("%c", espaco); }
    for (i; i < 17; i++) { printf("%c", letraO); }
    for (i; i < 22; i++) { printf("%c", espaco); }
    for (i; i < 25; i++) { printf("%c", letraO); }
    for (i; i < 28; i++) { printf("%c", espaco); }
    for (i; i < 31; i++) { printf("%c", letraO); }
    for (i; i < 34; i++) { printf("%c", espaco); }
    for (i; i < 37; i++) { printf("%c", letraO); }
    for (i; i < 50; i++) { printf("%c", espaco); }
    for (i; i < 53; i++) { printf("%c", letraO); }
    for (i; i < 54; i++) { printf("%c", espaco); }
    for (i; i < 57; i++) { printf("%c", letraO); }
    for (i; i < 63; i++) { printf("%c", espaco); }
    for (i; i < 66; i++) { printf("%c", letraO); }
    for (i; i < 68; i++) { printf("%c", espaco); }
    for (i; i < 72; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 7
    printf("%c", mVert);
    for (i = 1; i < 6; i++) { printf("%c", espaco); }
    for (i; i < 9; i++) { printf("%c", letraO); }
    for (i; i < 14; i++) { printf("%c", espaco); }
    for (i; i < 17; i++) { printf("%c", letraO); }
    for (i; i < 22; i++) { printf("%c", espaco); }
    for (i; i < 25; i++) { printf("%c", letraO); }
    for (i; i < 28; i++) { printf("%c", espaco); }
    for (i; i < 31; i++) { printf("%c", letraO); }
    for (i; i < 34; i++) { printf("%c", espaco); }
    for (i; i < 37; i++) { printf("%c", letraO); }
    for (i; i < 49; i++) { printf("%c", espaco); }
    for (i; i < 52; i++) { printf("%c", letraO); }
    for (i; i < 55; i++) { printf("%c", espaco); }
    for (i; i < 58; i++) { printf("%c", letraO); }
    for (i; i < 63; i++) { printf("%c", espaco); }
    for (i; i < 70; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 8
    printf("%c", mVert);
    for (i = 1; i < 6; i++) { printf("%c", espaco); }
    for (i; i < 16; i++) { printf("%c", letraO); }
    for (i; i < 22; i++) { printf("%c", espaco); }
    for (i; i < 29; i++) { printf("%c", letraO); }
    for (i; i < 34; i++) { printf("%c", espaco); }
    for (i; i < 41; i++) { printf("%c", letraO); }
    for (i; i < 48; i++) { printf("%c", espaco); }
    for (i; i < 51; i++) { printf("%c", letraO); }
    for (i; i < 56; i++) { printf("%c", espaco); }
    for (i; i < 59; i++) { printf("%c", letraO); }
    for (i; i < 63; i++) { printf("%c", espaco); }
    for (i; i < 68; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 9
    printf("%c", mVert);
    for (i = 1; i < 6; i++) { printf("%c", espaco); }
    for (i; i < 9; i++) { printf("%c", letraO); }
    for (i; i < 14; i++) { printf("%c", espaco); }
    for (i; i < 17; i++) { printf("%c", letraO); }
    for (i; i < 22; i++) { printf("%c", espaco); }
    for (i; i < 25; i++) { printf("%c", letraO); }
    for (i; i < 27; i++) { printf("%c", espaco); }
    for (i; i < 30; i++) { printf("%c", letraO); }
    for (i; i < 34; i++) { printf("%c", espaco); }
    for (i; i < 41; i++) { printf("%c", letraO); }
    for (i; i < 48; i++) { printf("%c", espaco); }
    for (i; i < 59; i++) { printf("%c", letraO); }
    for (i; i < 63; i++) { printf("%c", espaco); }
    for (i; i < 70; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 10
    printf("%c", mVert);
    for (i = 1; i < 6; i++) { printf("%c", espaco); }
    for (i; i < 9; i++) { printf("%c", letraO); }
    for (i; i < 14; i++) { printf("%c", espaco); }
    for (i; i < 17; i++) { printf("%c", letraO); }
    for (i; i < 22; i++) { printf("%c", espaco); }
    for (i; i < 25; i++) { printf("%c", letraO); }
    for (i; i < 28; i++) { printf("%c", espaco); }
    for (i; i < 31; i++) { printf("%c", letraO); }
    for (i; i < 34; i++) { printf("%c", espaco); }
    for (i; i < 37; i++) { printf("%c", letraO); }
    for (i; i < 47; i++) { printf("%c", espaco); }
    for (i; i < 60; i++) { printf("%c", letraO); }
    for (i; i < 63; i++) { printf("%c", espaco); }
    for (i; i < 66; i++) { printf("%c", letraO); }
    for (i; i < 68; i++) { printf("%c", espaco); }
    for (i; i < 72; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 11
    printf("%c", mVert);
    for (i = 1; i < 6; i++) { printf("%c", espaco); }
    for (i; i < 16; i++) { printf("%c", letraO); }
    for (i; i < 22; i++) { printf("%c", espaco); }
    for (i; i < 25; i++) { printf("%c", letraO); }
    for (i; i < 28; i++) { printf("%c", espaco); }
    for (i; i < 31; i++) { printf("%c", letraO); }
    for (i; i < 34; i++) { printf("%c", espaco); }
    for (i; i < 44; i++) { printf("%c", letraO); }
    for (i; i < 47; i++) { printf("%c", espaco); }
    for (i; i < 50; i++) { printf("%c", letraO); }
    for (i; i < 57; i++) { printf("%c", espaco); }
    for (i; i < 60; i++) { printf("%c", letraO); }
    for (i; i < 63; i++) { printf("%c", espaco); }
    for (i; i < 66; i++) { printf("%c", letraO); }
    for (i; i < 70; i++) { printf("%c", espaco); }
    for (i; i < 74; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 12
    printf("%c", mVert);
    for (i = 1; i < 6; i++) { printf("%c", espaco); }
    for (i; i < 15; i++) { printf("%c", letraO); }
    for (i; i < 22; i++) { printf("%c", espaco); }
    for (i; i < 25; i++) { printf("%c", letraO); }
    for (i; i < 28; i++) { printf("%c", espaco); }
    for (i; i < 31; i++) { printf("%c", letraO); }
    for (i; i < 34; i++) { printf("%c", espaco); }
    for (i; i < 44; i++) { printf("%c", letraO); }
    for (i; i < 46; i++) { printf("%c", espaco); }
    for (i; i < 49; i++) { printf("%c", letraO); }
    for (i; i < 58; i++) { printf("%c", espaco); }
    for (i; i < 61; i++) { printf("%c", letraO); }
    for (i; i < 63; i++) { printf("%c", espaco); }
    for (i; i < 66; i++) { printf("%c", letraO); }
    for (i; i < 72; i++) { printf("%c", espaco); }
    for (i; i < 74; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 13
    printf("%c", mVert);
    for (i = 1; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 14
    printf("%c", mVert);
    for (i = 1; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 15
    printf("%c", mVert);
    for (i = 1; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //linha 16
    printf("%c", mVert);
    for (i = 1; i < 27; i++) { printf("%c", espaco); }
    printf("%c", cSupEsq);
    for (i = 28; i < 52; i++) { printf("%c", mHor); }
    printf("%c", cSupDir);
    for (i = 53; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 17
    printf("%c", mVert);
    for (i = 1; i < 27; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 28; i < 52; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 53; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 18
    printf("%c", mVert);
    for (i = 1; i < 27; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    printf("%c", espaco);
    printf("Novo Jogo");
    for (i = 38; i < 52; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 53; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 19
    printf("%c", mVert);
    for (i = 1; i < 27; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    printf("%c", espaco);
    printf("Recorde");
    for (i = 36; i < 52; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 53; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 20
    printf("%c", mVert);
    for (i = 1; i < 27; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    printf("%c", espaco);
    printf("Sair");
    for (i = 33; i < 52; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 53; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 21
    printf("%c", mVert);
    for (i = 1; i < 27; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 28; i < 52; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 53; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 22
    printf("%c", mVert);
    for (i = 1; i < 27; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 28; i < 52; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 53; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 23
    printf("%c", mVert);
    for (i = 1; i < 27; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 28; i < 52; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 53; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 24
    printf("%c", mVert);
    for (i = 1; i < 27; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 28; i < 52; i++) { printf("%c", espaco); }
    printf("%c", mVert);
    for (i = 53; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //linha 25
    printf("%c", mVert);
    for (i = 1; i < 27; i++) { printf("%c", espaco); }
    printf("%c", cInfEsq);
    for (i = 28; i < 52; i++) { printf("%c", mHor); }
    printf("%c", cInfDir);
    for (i = 53; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 26
    printf("%c", mVert);
    for (i = 1; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 27
    printf("%c", mVert);
    for (i = 1; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 28
    printf("%c", mVert);
    for (i = 1; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 29
    printf("%c", mVert);
    for (i = 1; i < 18; i++) { printf("%c", espaco); }
    for (i; i < 25; i++) { printf("%c", letraO); }
    for (i; i < 33; i++) { printf("%c", espaco); }
    for (i; i < 36; i++) { printf("%c", letraO); }
    for (i; i < 40; i++) { printf("%c", espaco); }
    for (i; i < 43; i++) { printf("%c", letraO); }
    for (i; i < 47; i++) { printf("%c", espaco); }
    for (i; i < 62; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 30
    printf("%c", mVert);
    for (i = 1; i < 17; i++) { printf("%c", espaco); }
    for (i; i < 26; i++) { printf("%c", letraO); }
    for (i; i < 33; i++) { printf("%c", espaco); }
    for (i; i < 36; i++) { printf("%c", letraO); }
    for (i; i < 40; i++) { printf("%c", espaco); }
    for (i; i < 43; i++) { printf("%c", letraO); }
    for (i; i < 47; i++) { printf("%c", espaco); }
    for (i; i < 62; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 31
    printf("%c", mVert);
    for (i = 1; i < 16; i++) { printf("%c", espaco); }
    for (i; i < 20; i++) { printf("%c", letraO); }
    for (i; i < 23; i++) { printf("%c", espaco); }
    for (i; i < 27; i++) { printf("%c", letraO); }
    for (i; i < 33; i++) { printf("%c", espaco); }
    for (i; i < 36; i++) { printf("%c", letraO); }
    for (i; i < 40; i++) { printf("%c", espaco); }
    for (i; i < 43; i++) { printf("%c", letraO); }
    for (i; i < 53; i++) { printf("%c", espaco); }
    for (i; i < 56; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 32
    printf("%c", mVert);
    for (i = 1; i < 16; i++) { printf("%c", espaco); }
    for (i; i < 19; i++) { printf("%c", letraO); }
    for (i; i < 24; i++) { printf("%c", espaco); }
    for (i; i < 27; i++) { printf("%c", letraO); }
    for (i; i < 33; i++) { printf("%c", espaco); }
    for (i; i < 36; i++) { printf("%c", letraO); }
    for (i; i < 40; i++) { printf("%c", espaco); }
    for (i; i < 43; i++) { printf("%c", letraO); }
    for (i; i < 53; i++) { printf("%c", espaco); }
    for (i; i < 56; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 33
    printf("%c", mVert);
    for (i = 1; i < 16; i++) { printf("%c", espaco); }
    for (i; i < 19; i++) { printf("%c", letraO); }
    for (i; i < 24; i++) { printf("%c", espaco); }
    for (i; i < 27; i++) { printf("%c", letraO); }
    for (i; i < 33; i++) { printf("%c", espaco); }
    for (i; i < 36; i++) { printf("%c", letraO); }
    for (i; i < 40; i++) { printf("%c", espaco); }
    for (i; i < 43; i++) { printf("%c", letraO); }
    for (i; i < 53; i++) { printf("%c", espaco); }
    for (i; i < 56; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 34
    printf("%c", mVert);
    for (i = 1; i < 16; i++) { printf("%c", espaco); }
    for (i; i < 19; i++) { printf("%c", letraO); }
    for (i; i < 24; i++) { printf("%c", espaco); }
    for (i; i < 27; i++) { printf("%c", letraO); }
    for (i; i < 33; i++) { printf("%c", espaco); }
    for (i; i < 36; i++) { printf("%c", letraO); }
    for (i; i < 40; i++) { printf("%c", espaco); }
    for (i; i < 43; i++) { printf("%c", letraO); }
    for (i; i < 53; i++) { printf("%c", espaco); }
    for (i; i < 56; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 35
    printf("%c", mVert);
    for (i = 1; i < 16; i++) { printf("%c", espaco); }
    for (i; i < 20; i++) { printf("%c", letraO); }
    for (i; i < 23; i++) { printf("%c", espaco); }
    for (i; i < 27; i++) { printf("%c", letraO); }
    for (i; i < 33; i++) { printf("%c", espaco); }
    for (i; i < 37; i++) { printf("%c", letraO); }
    for (i; i < 39; i++) { printf("%c", espaco); }
    for (i; i < 43; i++) { printf("%c", letraO); }
    for (i; i < 53; i++) { printf("%c", espaco); }
    for (i; i < 56; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 36
    printf("%c", mVert);
    for (i = 1; i < 17; i++) { printf("%c", espaco); }
    for (i; i < 26; i++) { printf("%c", letraO); }
    for (i; i < 34; i++) { printf("%c", espaco); }
    for (i; i < 42; i++) { printf("%c", letraO); }
    for (i; i < 53; i++) { printf("%c", espaco); }
    for (i; i < 56; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 37
    printf("%c", mVert);
    for (i = 1; i < 18; i++) { printf("%c", espaco); }
    for (i; i < 25; i++) { printf("%c", letraO); }
    for (i; i < 35; i++) { printf("%c", espaco); }
    for (i; i < 41; i++) { printf("%c", letraO); }
    for (i; i < 53; i++) { printf("%c", espaco); }
    for (i; i < 56; i++) { printf("%c", letraO); }
    for (i; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 38
    printf("%c", mVert);
    for (i = 1; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 39
    printf("%c", mVert);
    for (i = 1; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);

    //Linha 40
    printf("%c", cInfEsq);
    for (i = 1; i < 79; i++) { printf("%c", mHor); }
    printf("%c", cInfDir);
}

void showGameScreen()
{
    //TODO - Implementar tela do jogo

    //Inicia limpando a tela da aplicação
    clrscr();

    //Temporário - Exibe uma mensagem informando o nome da tela
    printf("Tela de jogo");

    //Aguarda um caracter para sair da tela
    getch();
}

void showRecordsScreen()
{
    //TODO - Implementar tela de recordes

    //Inicia limpando a tela da aplicação
    clrscr();

    //Temporário - Exibe uma mensagem informando o nome da tela
    printf("Tela de recordes");

    //Aguarda um caracter para sair da tela
    getch();
}
