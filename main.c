//Autores: Jéferson Ferreira Guimarães e Eduardo Henrique Ferreira do Nascimento

//Arquivo principal de código do projeto Breakout

#include <Windows.h>
#include <stdlib.h>

#include "constants.h"
#include "display.h"
#include "navigation.h"
#include "engine.h"
#include "records.h"

int main(void)
{
    //Declaração de variáveis
    int opcaoMenu = 0;
    int playerScore = 0;

    //Seta o tamanho de tela para 40x80
    //Uma linha a mais é necessária pois após o último printf o cursor vai a linha 41
    system("mode 80, 41");

    //Esconde o cursor da tela
    hideCursor();

    //Inicializa o gerador de números aleatórios que será usado no jogo
    srand(time(NULL));

    //Permite ao usuário navegar no menu e permanece no loop enquanto o usuário não escolher sair do jogo
    do {
        //Exibe o menu
        showMenu();

        //Verifica a opção do usuário no menu
        opcaoMenu = navigateMenu();

        //Entra na tela correspondente à opção
        switch (opcaoMenu) {
        case NOVOJOGO:
            //Exibe a tela de jogo
            showGameScreen();

            //Inicia o jogo e obtém a pontuação do jogador ao final do jogo
            playerScore = startGame();

            //Verifica se a pontuação é um recorde, e se for o salva
            readNewRecord(playerScore);
            break;
        case RECORDES:
            //Exibe a tela de recordes
            showRecordsScreen();

            //Exibe os recordes alcançados pelos jogadores
            printRecords();

            //Aguarda um caracter para sair da tela de recordes
            getch();
            break;
        }
    } while (opcaoMenu != SAIR);

    //Chama a função que exibe a tela de saída
    showClosingScreen();

    //Finaliza o programa
    return 0;
}

