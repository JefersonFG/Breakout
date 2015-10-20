//Arquivo principal de código do projeto Breakout

#include <stdio.h>
#include <Windows.h>
#include <display.h>

int main(void)
{
    system("mode 80, 40");

    //Exibe o menu
    showMenu();

    getchar();

    return 0;
}

