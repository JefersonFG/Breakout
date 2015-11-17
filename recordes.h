//Arquivo que organiza e manipula os recordes conseguidos no jogo

#include <stdio.h>

typedef struct recorde
{
    char nome[15+1]; //Nome do usuário com no máximo 15 carcteres. '+1' destinado ao '\0'
    int pontos; // Pontos feitos no jogo.
}


void le_recorde(struct recorde comparar)
{

    if(comparar.pontos > jogador.pontos)
    {
        jogador.pontos = comparar.pontos
    }

}
void imprime_recordes ()
