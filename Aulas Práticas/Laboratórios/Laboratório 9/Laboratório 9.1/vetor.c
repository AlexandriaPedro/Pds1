#include "vetor.h"

// TODO: implemente as funções requeridas

int soma(int *vetor, int n) {
    if (n == 0) {
        return 0;
    } else {
        return vetor[n - 1] + soma(vetor, n - 1);
    }
}
