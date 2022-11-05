#include <stdio.h>
#include <stdlib.h>

int main () {
    float receita, incentivo, imposto;

    scanf("%f %f", &receita, &incentivo);

    imposto = (receita - incentivo) * 0.15;

    printf("%.2f", imposto);

    return 0;
}
