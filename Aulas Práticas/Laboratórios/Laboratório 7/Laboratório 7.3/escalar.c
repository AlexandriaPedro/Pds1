#include "escalar.h"

double calcula_escalar(double *v1, double *v2, double n) {
    double resp = 0;

    for(int i = 0; i < n; i++) {
        resp += v1[i] * v2[i];
    }

    return resp;
}
