#include <stdio.h>

#include "converte.h"

int main(int argc, char *argv[]) {
    double numero;
    scanf("%lf", &numero);
    int* num_int = converte_para_inteiro(&numero);
    float* num_flt = converte_para_float(&numero);
    char* num_chr = converte_para_char(&numero);
    // Adicione os prints para os numeros convertidos abaixo:
    
    
    
    return 0;
}
