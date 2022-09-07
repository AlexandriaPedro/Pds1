#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char nome[51]; /*Perceba que se eu não denoto o espaço de char, o nome não é imprimido*/

    printf("Escreva seu nome completo: ");
    gets(nome);
    printf("Prazer em conhecer você, %s.", nome);

    return 0;
}
