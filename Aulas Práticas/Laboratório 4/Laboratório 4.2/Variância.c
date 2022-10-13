#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, i;
    double media, variancia, vari = 0, soma = 0;

    scanf("%d", &n);

    double valores[n];

    for(i = 0; i < n; i++) {
        scanf("%lf", &valores[i]);
        soma += valores[i];
    }

    media = soma / n;

    for(i = 0; i < n; i++) {
        vari += (valores[i] - media) * (valores[i] - media);
    }

    variancia = vari / n;

    printf("%lf", variancia);

    return 0;
}
