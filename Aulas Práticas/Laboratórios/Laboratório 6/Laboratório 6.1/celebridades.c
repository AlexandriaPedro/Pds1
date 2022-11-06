#include "celebridades.h"
#include <stdio.h>

// TODO: implemente aqui as funções requeridas

Celebridade le_celebridade() {
    Celebridade c;
    char data[12];

    fgets(c.nome, 50, stdin);
    fgets(data, 12, stdin);
    
    sscanf(data, "%d/%d/%d", &c.dia, &c.mes, &c.ano);

    return c;
}

void exibe_celebridade(Celebridade c) {
    printf(c.nome);
    printf("%02d de %02d de %04d\n", c.dia, c.mes, c.ano);
}

void adiciona_celebridades(Celebridade *cs, int n) {
    for(int i = 0; i < n; i ++) {
        cs[i] = le_celebridade();
    }
}

void exibe_celebridades(Celebridade *cs, int n) {
    for(int i = 0; i < n; i ++) {
        exibe_celebridade(cs[i]);
    }
}
