//Arquivo com funções que permitem ao usuário navegar através das telas do jogo

//Diretivas de compilação para impedir que o arquivo seja declarado duas vezes
#ifndef NAVIGATION_H
#define NAVIGATION_H

#include <stdio.h>
#include "conio21/conio2.h"

//Tipo enumerado com as opções do menu para navegação
typedef enum {NOVOJOGO, RECORDES, SAIR} menuOptions;

//Função que verifica e retorna a opção do usuário no menu principal
int navigateMenu();

//Função que exibe a seleção do item do menu imprimindo-o com uma cor de destaque
void highlightMenuOption(int *opcaoAtual);

int navigateMenu()
{
    //Declaração de variáveis
    int opcaoMenu = 0;
    char keyPress = ' ';

    //Indica que o cursor está na primeira posição
    opcaoMenu = NOVOJOGO;

    //Inicializa o cursor na primeira opção
    highlightMenuOption(&opcaoMenu);

    //Entra em um loop para permitir a navegação entre os menus
    //O loop termina quando o usuário digitar o valor enter
    while (keyPress != '\r' && keyPress != '\n') {
        //Verifica o caracter digitado e age de acordo
        keyPress = getch();

        //Quando pressionadas, as teclas de navegação colocam os seguintes valores no buffer:
        //-32 e 72 (cima) ou 80 (baixo) ou 77 (direita) ou 75 (esquerda)
        //O código abaixo verifica o primeiro caracter e testa o segundo
        //Isto é feito para evitar que outras teclas ativem a navegação
        if (keyPress == -32) {

            keyPress = getch();

            switch(keyPress) {
            case 72:
                //Tecla para cima
                //Somente troca a opção do menu caso não esteja na mais acima
                if (opcaoMenu > 0) {
                    opcaoMenu--;
                    highlightMenuOption(&opcaoMenu);
                }
                break;
            case 80:
                //Tecla para baixo
                //Somente troca a opção do menu caso não esteja na mais abaixo
                if (opcaoMenu < 2) {
                    opcaoMenu++;
                    highlightMenuOption(&opcaoMenu);
                }
                break;
            }
        }
    }

    //Retorna a opção do usuário
    return opcaoMenu;
}

void highlightMenuOption(int *opcaoAtual)
{
    //Configura a cor do cursor para imprimir as opções do menu
    textbackground(BLACK);
    textcolor(LIGHTGRAY);

    //Imprime todas as opções por padrão
    gotoxy(30,18);
    printf("Novo Jogo");
    gotoxy(30,19);
    printf("Recordes");
    gotoxy(30,20);
    printf("Sair");

    //Configura a cor do cursor para imprimir a opção de destaque
    textbackground(LIGHTGRAY);
    textcolor(BLACK);

    //Verifica a opção atual e imprime a opçao de acordo
    switch (*opcaoAtual) {
    case NOVOJOGO:
        gotoxy(30,18);
        printf("Novo Jogo");
        break;
    case RECORDES:
        gotoxy(30,19);
        printf("Recordes");
        break;
    case SAIR:
        gotoxy(30,20);
        printf("Sair");
        break;
    }

    //Reseta os valores de cores para os valores padrão antes de retornar a função
    textbackground(BLACK);
    textcolor(LIGHTGRAY);
}

#endif //NAVIGATION_H
