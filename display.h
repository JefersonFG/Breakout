//Arquivo com as funções que exibem informações na tela, como o fundo do jogo e dos menus

#include <stdio.h>

void showMenuBackground();

//Função que exibe o menu principal
void showMenu()
{
    showMenuBackground();
}

//Função que exibe a tela de fundo do menu
void showMenuBackground()
{
    //Variáveis que serão utilizadas
    int i = 0;          //contador
    int cSupEsq = 218;  //'┌'
    int mHor = 196;     //'─'
    int cSupDir = 191;  //'┐'
    int mVert = 179;    //'│'
    int espaco = 255;   //' '
    int letraO = 111;   //'o'

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

    //linha 15
    printf("%c", mVert);
    for (i = 1; i < 79; i++) { printf("%c", espaco); }
    printf("%c", mVert);
}
