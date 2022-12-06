//1) Escreva um programa que leia do usuário o nome de um arquivo texto.
//Em seguida, mostre na tela quantas linhas esse arquivo possui.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE * arquivo;

    char nome_arquivo[50];
    scanf("%s", &nome_arquivo);

    arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL) {
        printf("Deu ruim\n");
        
        return 1;
    }

    int linhas = 0;
    for (char c = getc(arquivo); c != EOF; c = getc(arquivo)) {
        if (c == '\n') {
            linhas ++;
        }
    }

    printf("O arquivo %s tem %d linhas", nome_arquivo, linhas);

    fclose(arquivo);
}