#include "celebridades.h"
#include <stdio.h>

// TODO: implemente aqui as funções requeridas

void adiciona_celebridade(celebridade *c) {
    char data[12];

    fgets(c->nome, 100, stdin);
    fgets(data, 12, stdin);

    sscanf(data, "%d/%d/%d", &c->dia_nascimento, &c->mes_nascimento, &c->ano_nascimento);
} 

void exibe_celebridade(celebridade *c) {
    printf("%s", c->nome);
    printf("%02d de %02d de %04d\n", c->dia_nascimento, c->mes_nascimento, c->ano_nascimento);
}

void adiciona_celebridades(celebridade *c, int n) {
    for(int i = 0; i < n; i ++) {
        adiciona_celebridade(&c[i]);
    }
}

void exibe_celebridades(celebridade *c, int n) {
    for(int i = 0; i < n; i ++) {
        exibe_celebridade(&c[i]);
    }
}
