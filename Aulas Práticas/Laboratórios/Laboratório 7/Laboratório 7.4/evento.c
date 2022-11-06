#include "evento.h"
#include <stdio.h>
#include <string.h>

void cadastrar_eventos(Evento *agenda, int n) {
    for (int i = 0; i < n; i ++) {
        unsigned mes;
        scanf("%s %s", &agenda[i].nome, &agenda[i].local);
        scanf("%d %d %d", &agenda[i].d.dia, &mes, &agenda[i].d.ano);
        agenda[i].d.mes = mes;
    }
}

void imprimir_eventos(Evento *agenda, Data d, int n) {
    int aux = 0;

    for (int i = 0; i < n; i ++) {
        if ((d.dia == agenda[i].d.dia) && (d.mes == agenda[i].d.mes) && (d.ano == agenda[i].d.ano)) {
            printf("%s %s\n", agenda[i].nome, agenda[i].local);
            aux += 1;
        }
    }

    if (aux == 0) {
        printf("Nenhum evento encontrado!");
    }
}
