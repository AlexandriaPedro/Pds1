#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, soma, x;
    
    scanf("%d", &n);

    soma = 0;
    
    while (n > 0) {
        x = n % 10;
        n = (n - x) / 10;
        soma = soma + x;
    }
    
    printf("%d", soma);
    
    return 0;
}
