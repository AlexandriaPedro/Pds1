#ifndef EVENTO_H_
#define EVENTO_H_

typedef enum Mes { 
    // TODO: completar
} Mes;

typedef struct Data {
    // TODO: completar campos
} Data;

typedef struct Evento {
    // TODO: completar
} Evento;

void cadastrar_eventos(Evento *agenda, int n);
void imprimir_eventos(Evento *agenda, Data d, int n);

#endif
