#include "func.h"

// TODO: implemente aqui as funções requeridas

bool eh_primo(int n) {
    int verificador = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            verificador ++;
        }
    }

    if (verificador > 2) {
        return false;
    } else {
        return true;
    }
}

int soma_primos(int n) {
    int soma = 0;

    soma += n;

    return soma;
}
