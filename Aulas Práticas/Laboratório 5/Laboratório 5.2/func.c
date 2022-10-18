#include "func.h"

// TODO: implemente aqui as funções requeridas

bool eh_triangulo(int a, int b, int c) {
    if (a < b + c && b < a + c && c < a + b) {
        return true;
    } else {
        return false;
    }
}

int tipo_triangulo(int a, int b, int c) {
    if (a == b && a == c) {
        return 2;
    } else if (a != b && a != c && b != c) {
        return 0;
    } else {
        return 1;
    }
}
