#include <stdio.h>
#include <math.h>

int main() {
    float pb, ab, imcb;
    float po, ao, imco;
    
    pb = 122, ab = 1.84;
    po = 45, ao = 1.76;

    imcb = pb / pow(ab, 2);
    imco = po / pow(ao, 2);

    printf("Como o IMC de Brutus é %.1f, então ele está Obesidade grau II.", imcb);
    printf("\nE como o IMC de Olívia é %.1f, então ela está com Magreza grave.", imco);

    float pib, ppb;
    float pio, pgo;

    pib = 24.9 * pow(ab, 2);
    ppb = pb - pib;

    pio = 18.5 * pow(ao, 2);
    pgo = pio - po;

    printf("\nLogo, como...\n");
    printf("O IMC do Brutus é %.2f e o IMC da Olívia é %.2f. Brutus precisa perder, no", imcb, imcb);
    printf("mínimo, (aproximadamente) %d quilos e Olívia precisa ganhar, no mínimo, (aproximadamente) %d quilos.", (int)ppb, (int)pgo);

    return 0;
}
