#include <stdio.h>
#include <stdlib.h>

#include "vetor.h"

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    // TODO: altere o código para alocar o vetor dinamicamente.
    //       o vetor deve conter `n` inteiros.
    int *vetor;

    vetor = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("%d\n", soma(vetor, n));
    return 0;
}
