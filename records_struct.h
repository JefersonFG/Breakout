//Arquivo contendo a estrutura de gerenciamento de dados dos recordes
//O arquivo records.h necessita da estrutura para manipulação de dados
//E o arquivo persistence.h necessita da estrutura para salvar e carregar os dados de um arquivo binário

//Estrutura de dados contendo os recordes do jogo
typedef struct recorde
{
    char nome[15+1];    // Nome do usuário com no máximo 15 carcteres. '+1' destinado ao '\0'
    int pontos;         // Pontos feitos no jogo.
} recordes;
