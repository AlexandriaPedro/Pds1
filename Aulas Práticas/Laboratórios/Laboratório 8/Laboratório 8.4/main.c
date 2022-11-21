#include <stdio.h>

#include "evento.h"

int main(int argc, char *argv[]) {
    // Escreva seu código aqui

    int n;

    scanf("%d", &n);

    Evento agenda[100];

    cadastrar_eventos(agenda, n);

    Data d;
    unsigned mes;

    scanf("%u %u %u", &d.dia, &mes, &d.ano);

    d.mes = mes;

    imprimir_eventos(agenda, d, n);

    return 0;
}
