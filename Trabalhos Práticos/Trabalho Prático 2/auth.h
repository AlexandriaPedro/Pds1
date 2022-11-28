#ifndef AUTH_H_
#define AUTH_H_

#include <stdbool.h>

typedef struct Usuario {
    // TODO: completar campos
} Usuario;

typedef struct BancoDados {
    // TODO: completar campos
} BancoDados;

char *vignere(char *texto, char *chave);
char *des_vignere(char *cifrado, char *chave);
bool autenticar(Usuario u, BancoDados bd);


#endif // AUTH_H_
