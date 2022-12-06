//3) Escreva um programa para converter o conteúdo de um arquivo texto
//em caracteres maiúsculos. O programa deverá ler do usuário o nome do
//arquivo a ser convertido e o nome do arquivo a ser salvo.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    FILE * arquivo1;
    FILE * arquivo2;

    char nome_arquivo1[100];
    char nome_arquivo2[100];

    scanf("%s", &nome_arquivo1);
    scanf("%s", &nome_arquivo2);

    arquivo1 = fopen(nome_arquivo1, "r");
    arquivo2 = fopen(nome_arquivo2, "ab");

    if (arquivo1 == NULL || arquivo2 == NULL) {
        printf("Deu ruim!\n");

        return 1;
    }

    for (char c = fgetc(arquivo1); c != EOF; c = fgetc(arquivo1)) {
        char c_maior = toupper(c);
        int d = (int) c_maior;
        fputc(d, arquivo2);
    }

    fclose(arquivo1);
    fclose(arquivo1);
}