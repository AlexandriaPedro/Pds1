#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main() {
    int *A;
    int n, i, x, soma;
    
    scanf("%d", &n);
    
    A = aloca_vetor(n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        A[i] = x;
    }
    
    soma = subarranjo_maximo(A, n);
    
    printf("%d", soma);

    libera_vetor(A);
    
    return 0;
}
