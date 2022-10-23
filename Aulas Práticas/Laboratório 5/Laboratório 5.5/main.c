#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main() {
    int n, i, x, arranjo;
    
    scanf("%d", &n);
    
    int A[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        A[i] = x;
    }
    
    arranjo = arranjo_posicoes_valido(A, n);
    
    printf("%d", arranjo);
    
    return 0;
}
