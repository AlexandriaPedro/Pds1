#include <stdio.h>
#include <stdlib.h>

int main() {
    int horas;
    float custoHora, custoTotal;

    scanf("%d %f", &horas, &custoHora);

    custoTotal = (horas * custoHora) * 1.15;

    printf("%.2f", custoTotal);

    return 0;
}
