#include "quadrado.h"
#include <stdio.h>
#include <math.h>

// TODO: implemente aqui as funções requeridas

Linha le_linha() {
    Linha l;

    char ler[50];

    fgets(ler, 50, stdin);

    sscanf(ler, "%d %d %d %d", &l.p1.x, &l.p1.y, &l.p2.x, &l.p2.y);

    return l;
}

Quadrado le_quadrado() {
    Quadrado q;

    for(int i = 0; i < 4; i++) {
        q.l[i] = le_linha(); 
    }

    return q;
}

void exibe_perimetro(Quadrado q) {
    float per = 0;
    
    int i, val_x, val_y;
    
    for (i = 0; i < 4; i++) {
        
        val_x = q.l[i].p1.x - q.l[i].p2.x;
        val_y = q.l[i].p1.y - q.l[i].p2.y;
        
        per += sqrt(pow(val_x, 2) + pow(val_y, 2));
        
    }
    
    printf("%.0f", per);
}
