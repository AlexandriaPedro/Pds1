#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float cateto1, cateto2;
    double hipotenusa;

    scanf("%f %f", &cateto1, &cateto2);

    hipotenusa = pow(cateto1, 2) + pow(cateto2, 2);
    hipotenusa = sqrt(hipotenusa);

    printf("%lf", hipotenusa);

    return 0;
}
