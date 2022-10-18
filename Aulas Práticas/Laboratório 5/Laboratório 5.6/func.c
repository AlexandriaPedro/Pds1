#include "func.h"
#include <stdio.h>
#include <stdlib.h>

// TODO: implemente aqui as funções requeridas

float inicia_saldo (float s) {
    s = 00.00;
    return s;
}

double deposita_valor (double n) {
    return n;
}

double resgata_valor (double n) {
    return n;
}

double retorna_valor () {
    int s = 0;
    return s;
}

int le_entrada(int n) {
    int i = 0, opcao, saldo, veri = 0;
    double n = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &opcao);
        if (opcao == 1) {
            saldo += retorna_valor(saldo);
            veri ++;
        } else if (opcao == 2) {
            scanf("%lf", &n);
            saldo += deposita_valor(n);
        } else if (opcao == 3) {
            scanf("%lf", &n);
            saldo -= resgata_valor(n);
        }
    }

    return saldo;
}
