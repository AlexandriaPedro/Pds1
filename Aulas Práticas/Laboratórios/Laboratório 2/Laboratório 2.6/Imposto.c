#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorInicial, valorFinal;
    char estado;

    scanf("%f %c", &valorInicial, &estado);

    switch (estado)
    {
    case 'M':
        valorFinal = valorInicial + (0.07 * valorInicial);
        printf("%.2f", valorFinal);
        break;
    case 'S':
        valorFinal = valorInicial + (0.12 * valorInicial);
        printf("%.2f", valorFinal);
        break;
    case 'R':
        valorFinal = valorInicial + (0.15 * valorInicial);
        printf("%.2f", valorFinal);
        break;
    case 'B':
        valorFinal = valorInicial + (0.08 * valorInicial);
        printf("%.2f", valorFinal);
        break;
    case 'm':
        valorFinal = valorInicial + (0.07 * valorInicial);
        printf("%.2f", valorFinal);
        break;
    case 's':
        valorFinal = valorInicial + (0.12 * valorInicial);
        printf("%.2f", valorFinal);
        break;
    case 'r':
        valorFinal = valorInicial + (0.15 * valorInicial);
        printf("%.2f", valorFinal);
        break;
    case 'b':
        valorFinal = valorInicial + (0.08 * valorInicial);
        printf("%.2f", valorFinal);
        break;
    default:
        printf("Estado inválido");
        break;
    }

    return 0;
}
