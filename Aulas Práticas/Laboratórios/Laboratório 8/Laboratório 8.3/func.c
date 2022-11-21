#ifndef FUNC_C_
#define FUNC_C_
#include <stdlib.h>
#include <stdio.h>

// Adicione as funções aqui

double** aloca_matriz(int n, int m) {
    double *P;

    P = (double*) malloc(n * m * sizeof(double));

    return (double**) P;
}

void le_matriz(double **matriz, int n, int m) {
    for (int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j ++) {
            scanf("%lf", &matriz[i][j]);
        }
    }
}

double** produto_matricial(double** matriz1, double** matriz2, int n, int m) {
    double matrizC[n][m];
    int aux = 0;
    int x;

    for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			matrizC[i][j] = 0;

			for(x = 0; x < m; x++) {
				aux +=  matriz1[i][x] * matriz2[x][j];
			}

			matrizC[i][j] = aux;
			aux = 0;

            return (double**) matrizC;
        }
    }
}

void exibe_matriz(double **matriz, int n, int m) {
    for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			printf("%6.f", matriz[i][j]);
        }

        printf("\n\n");
    }
}

void libera_matrix(double **matriz, int n) {
    free(matriz);
}

#endif