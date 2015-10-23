//Arquivo principal de código do projeto Breakout

#include <stdio.h>
#include <Windows.h>
#include <display.h>

int main(void)
{
    //Seta o tamanho de tela para 40x80
    //A linha extra é temporária enquanto o cursor permanece na última linha
    //No futuro o cursor será realocado para o menu
    system("mode 80, 41");

    //Exibe o menu
    showMenu();

    //É utilizado o getchar para o programa não finalizar após printar o conteúdo na tela
    getchar();

    //Finaliza o programa
    return 0;
}

