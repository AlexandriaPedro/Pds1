#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n, i = 2, soma = 0, verificador = 1;

    while (n >= 0) {
        scanf("%d", &n);

        while (verificador <= n) {
            if (eh_primo(i) == true) {
                soma += soma_primos(i);
                verificador++;
            }
            i++;
        }

        printf("%d\n", soma);
    }

    return 0;
}
