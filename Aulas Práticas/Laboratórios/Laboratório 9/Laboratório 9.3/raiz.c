#include "raiz.h"

// TODO: implemente as funções requeridas

double raiz(double n, double palpite) {
    double estimativa = (palpite * palpite);

    if (absoluto(estimativa - n) < 0.01) {
        return palpite;
    }

    if (estimativa < n) {
        return raiz(n, palpite * 1.5);
    }
    
    return raiz(n, palpite * 0.5);
}

double absoluto(double a) {
    if (a < 0)
        return a * -1;
    return a;
}
