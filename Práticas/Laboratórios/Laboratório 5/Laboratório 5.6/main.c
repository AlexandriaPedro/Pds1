#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main() {
    double saldo = inicia_saldo();
    
    int entrada, i = 0, k;
    
    scanf("%d", &k);
    
    while (i <= k) {
        entrada = le_entrada();
        
        double n;
        
        if (entrada == 1) {
            retorna_valor(saldo);
        } else if (entrada == 2) {
            scanf("%lf", &n);
            saldo = deposita_valor(n, saldo);
        } else if (entrada == 3) {
            scanf("%lf", &n);
            saldo = resgata_valor(n, saldo);
        }
    i++;
    }
    
    return 0;
}
