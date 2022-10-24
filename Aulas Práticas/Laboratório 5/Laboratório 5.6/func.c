#include <stdio.h>
#include <stdlib.h>
#include "func.h"

// TODO: implemente aqui as funções requeridas

double inicia_saldo() {
    double saldo = 0;
    return saldo;
}

double deposita_valor(double n, double saldo) {
    saldo = saldo + n;
    return saldo;
}

double resgata_valor(double n, double saldo) {
    saldo = saldo - n;
    return saldo;
}

int retorna_valor(double saldo) {
    printf("%.2lf\n", saldo);
    return 0;
}

int le_entrada(int i, double saldo) {
    int n;
    scanf("%d", &n);
    
    return n;
}
