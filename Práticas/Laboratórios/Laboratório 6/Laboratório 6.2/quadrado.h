#ifndef QUADRADO_H_
#define QUADRADO_H_

typedef struct Ponto {
    // Adicione os atributos aqui

    int x, y;
} Ponto;

typedef struct Linha {
    // Adicione os atributos aqui

    Ponto p1, p2;
} Linha;

typedef struct Quadrado {
    // Adicione os atributos aqui

    Linha l[4];
} Quadrado;

Linha le_linha();
Quadrado le_quadrado();
void exibe_perimetro(Quadrado q);

#endif
