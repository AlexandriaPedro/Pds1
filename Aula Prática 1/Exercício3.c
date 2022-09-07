#include <stdio.h>

int main () {
    float m1, m2, m3, m4;

    m1 = 789.54;
    m2 = (m1 + ((m1 * 0.56) / 100)) + 303.20;
    m3 = (m2 + ((m2 * 0.56) / 100)) - 58.25;
    m4 = m3 + ((m3 * 0.56) / 100);

    printf("A conta terá R$%.2f no quarto mês.", m4);

    return 0;
}
