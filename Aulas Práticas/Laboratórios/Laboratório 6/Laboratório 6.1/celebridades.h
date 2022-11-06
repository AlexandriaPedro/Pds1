#ifndef CELEBRIDADES_H_
#define CELEBRIDADES_H_

// TODO: Declare aqui seu tipo de dados celebridade
typedef struct Celebridade {
    char nome[50];
    int dia, mes, ano;
} Celebridade;

Celebridade le_celebridade();
void exibe_celebridade(Celebridade c);

// O parâmetro cs é um arranjo de n celebridades
void adiciona_celebridades(Celebridade *cs, int n);
void exibe_celebridades(Celebridade *cs, int n);

#endif
