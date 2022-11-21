#ifndef EVENTO_H_
#define EVENTO_H_

typedef enum Mes { 
    // TODO: completar

    JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ
} Mes;

typedef struct Data {
    // TODO: completar campos

    enum Mes mes;
    int dia, ano;
} Data;

typedef struct Evento {
    // TODO: completar

    char nome[100];
    char local[100];
    Data d;
} Evento;

void cadastrar_eventos(Evento *agenda, int n);
void imprimir_eventos(Evento *agenda, Data d, int n);

#endif
