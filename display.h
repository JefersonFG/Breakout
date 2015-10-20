//Arquivo com as funções que exibem informações na tela, como o fundo do jogo e dos menus

#include <stdio.h>

void showMenuBackground();

//Função que exibe o menu principal
void showMenu()
{
    printf("\nMenu!\n");
    showMenuBackground();
}

//Função que exibe a tela de fundo do menu
void showMenuBackground()
{
    int i = 0;
    int c1 = 218;
    int c2 = 196;
    int c3 = 191;

    printf("%c", c1);

    for (i = 1; i < 80; i++) {
        printf("%c", c2);
    }

    printf("%c", c3);
}
