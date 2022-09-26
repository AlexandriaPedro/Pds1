#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, i, num, maior, menor;

    maior = 0;
    menor = 0;

    scanf("%d", &n);

    i = n;

    while(i > 0) {
        scanf("%d", &num);

        if(num > maior) {
            maior = num;
        }
        if(i == n) {
            menor = num;
        }
        else if (num < menor) {
            menor = num;
        }
        i--;
    }

    printf("Menor: %d\n", menor);
    printf("Maior: %d", maior);

    return 0;
}
