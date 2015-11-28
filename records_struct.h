//Arquivo contendo a estrutura de gerenciamento de dados dos recordes
//O arquivo records.h necessita da estrutura para manipulação de dados
//E o arquivo persistence.h necessita da estrutura para salvar e carregar os dados de um arquivo binário

//Diretivas de compilação para impedir que o arquivo seja declarado duas vezes
#ifndef RECORDS_STRUCT_H
#define RECORDS_STRUCT_H

//Estrutura de dados contendo os recordes do jogo
typedef struct {
    char nome[25+1];    // Nome do usuário com no máximo 15 carcteres. '+1' destinado ao '\0'
    int pontos;         // Pontos feitos no jogo.
} recordes;

#endif //RECORDS_STRUCT_H
