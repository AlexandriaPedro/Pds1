#include "palindromo.h"

// TODO: implemente as funções requeridas

int palindromo(char *palavra, int inicio, int fim) {
    if (inicio >= fim) {
        return 1;
    }
    
    if (palavra[inicio] != palavra[fim]) {
        return 0;
    }
    
    return palindromo(palavra, inicio + 1, fim - 1);
}