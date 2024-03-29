#ifndef AGENDA_H_
#define AGENDA_H_

#include <stdbool.h>

// (1) Defina a estrutura Contato:

typedef struct Contato{
    char *nome;
    unsigned int idade;
    char numero[12];
} Contato;

// (2) Declare a função criar_contato:

Contato criar_contato(void);

// (3) Declare a função inserir_contato:

bool inserir_contato(char *arquivo, Contato c);

// (4) Declare a função exibir_contatos:

bool exibir_contatos(char *arquivo);

#endif // AGENDA_H_
