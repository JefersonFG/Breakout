//Arquivo com definições de constantes para o programa

//Diretivas de compilação para impedir que o arquivo seja declarado duas vezes
#ifndef CONSTANTS_H
#define CONSTANTS_H

//Dimensões da tela
#define WIDTH 80
#define HEIGHT 40

//Número máximo de recordes a ser exibido/armazenado
#define MAXRECORDS 10

//Tamanho da base do jogo
#define BASESIZE 9

//Número de vidas no início do jogo
#define LIVES 3

//Pontuação de cada bloco
#define BLOCK_POINTS 10

//Número máximo de blocos do programa
#define MAXBLOCKS 300

//Tempo entre cada movimento da bolinha (em ms) e em quantos intervalos será dividido
#define DELAYTIME 150
#define DELAYPARTS 10

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
#define ESPACO    32   //' '
#define LETRAO   111   //'o'

//Defines com os caracteres das telas de jogo do programa
#define BLOCK     42   //'*'
#define BASE      45   //'-'
#define BALL     111   //'o'

#endif //CONSTANTS_H
