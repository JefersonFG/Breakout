//Arquivo com definições de constantes para o programa

//Diretivas de compilação para impedir que o arquivo seja declarado duas vezes
#ifndef CONSTANTS_H
#define CONSTANTS_H

//Dimensões da tela
#define WIDTH 80
#define HEIGHT 40

//Número máximo de recordes a ser exibido/armazenado
#define MAXRECORDS 10

//Tamanho dos arquivos de nível de jogo
#define LEVEL_FILE_HEIGHT 39
#define LEVEL_FILE_WIDTH 49

//Caminhos dos arquivos acessados pelo programa
#define RECORDS "..\\Breakout\\records.bin"
#define GAME_LEVEL_1 "..\\Breakout\\game_level_1.txt"

//Defines com os caracteres das telas de fundo do programa
#define CSUPESQ  218   //'┌'
#define CSUPDIR  191   //'┐'
#define CINFESQ  192   //'└'
#define CINFDIR  217   //'┘'
#define MVERT    179   //'│'
#define MHOR     196   //'─'
#define ESPACO   255   //' '
#define LETRAO   111   //'o'

//Defines com os caracteres das telas de jogo do programa
#define BLOCO     42   //'*'

#endif //CONSTANTS_H
