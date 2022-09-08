#include <stdio.h>

int main () { 
    /*
    Perceba que para cada nome diferente, você terá que adicionar uma
    variável para cada caractere daquele nome e atribuir ao mesmo seu
    valor em cactere entre aspas simples.
    Além disso, deve-se adicionar no printf um %d para cada uma dessas
    variáveis, e relacionar a esses %d as variáveis correspondentes a 
    cada letra nome, claro que, na ordem que lê cada letra do nome.
    */

    char p = 'P';
    char e = 'e';
    char d = 'd';
    char r = 'r';
    char o = 'o';

    printf("Seu nome em ASC é %d %d %d %d %d!", p, e, d, r, o);

    return 0;
}
