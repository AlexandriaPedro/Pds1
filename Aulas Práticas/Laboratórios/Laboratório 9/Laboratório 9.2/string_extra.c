#include "string_extra.h"
#include <string.h>

#include <stdlib.h>
#include <stdio.h>

// TODO: implemente as funções requeridas

void apaga_caractere(char *str, char c) {
    int i = 0;
    roda_caractere(str, c, i);
}

void roda_caractere(char *str, char c, int i) {
    if (str[i] != '\0') {
        verdadeiro_apaga_caractere(str, c, i);
        roda_caractere(str, c, i + 1);

    } else {
        exit(0);
    }
}

void verdadeiro_apaga_caractere(char *str, char c, int i) {
    if(str[i] == c) {
        int nada = 0;
    }
    else{
        printf("%c", str[i]);
    }
}
