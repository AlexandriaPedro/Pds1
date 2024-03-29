#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int potencia(int x, int y) {
	if(y==0)
		return 1;
	return x*potencia(x, y-1);
}

void strInv(char *str) {
	if(*str != '\0') {
		strInv(str+1);
		printf("%c", *str);
	}
}


void imp2Cont(int i, int n) {
	printf("%d\n", i);
	if(i != n) {
		imp2Cont(i+1, n);
		printf("%d\n", i);
	}
}

double ** le_matriz_simetrica(char *nome_arquivo, int tamanho)
{
  int i, j;
  FILE *fd = fopen(nome_arquivo, "r"); // #1: 1 ponto
  if(!fd) abort();
  double **M = (double**)malloc(tamanho * sizeof(double*)); // #2: 2 pontos
  if(M==NULL) abort(); //fecha o programa

  for(i = 0; i < tamanho; i++) { // #3: 1 ponto

    M[i] = (double*)malloc((i+1) * sizeof(double)); // #4: 2 pontos
    if(M==NULL) abort(); //fecha o programa

    for(j = 0; j <= i; j++) { // #5: 1 ponto

      fscanf(fd, "%lf", &(M[i][j])); // #6: 1 ponto
    }
  }

  fclose(fd); // #7: 1 ponto
  return M; // #8: 1 ponto
}



void main() {
	
	//4
	FILE *arqw = fopen("ascii.txt", "w");
	int i;
	for(i=0; i<=127; i++) {
		fprintf(arqw, "%d %c\n", i, i);
	}
	fclose(arqw);
	
}