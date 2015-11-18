//Arquivo principal de código do projeto Breakout

#include <Windows.h>
#include <stdlib.h>

#include "display.h"
#include "navigation.h"

int main(void)
{
    //Declaração de variáveis
    int opcaoMenu = 0;

    //Seta o tamanho de tela para 40x80
    //A linha extra é temporária enquanto o cursor permanece na última linha
    system("mode 80, 41");

    //Esconde o cursor da tela
    hideCursor();

    //Permite ao usuário navegar no menu e permanece no loop enquanto o usuário não escolher sair do jogo
    do {
        //Exibe o menu
        showMenu();

        //Verifica a opção do usuário no menu
        opcaoMenu = navigateMenu();

        //Entra na tela correspondente à opção
        switch (opcaoMenu) {
        case NOVOJOGO:
            showGameScreen();
            break;
        case RECORDES:
            showRecordsScreen();
            break;
        }
    } while (opcaoMenu != SAIR);

    //Envia o cursor para a última linha da janela
    gotoxy(1,41);

    //Finaliza o programa
    return 0;
}

