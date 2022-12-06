//2) Escreva um programa que leia do usuário os nomes de dois arquivos texto.
//Crie um terceiro arquivo texto com o conteúdo dos dois primeiros
//juntos (o conteúdo do primeiro seguido do conteúdo do segundo).

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE * arquivo1;
    FILE * arquivo2;
    FILE * arquivo3;

    char nome_arquivo1[100];
    char nome_arquivo2[100];
    scanf("%s", &nome_arquivo1);
    scanf("%s", &nome_arquivo2);

    arquivo1 = fopen(nome_arquivo1, "r");
    arquivo2 = fopen(nome_arquivo2, "r");
    arquivo3 = fopen("c.txt", "ab");

    if (arquivo1 == NULL || arquivo2 == NULL || arquivo3 == NULL) {
        printf("Deu ruim!");

        return 1;
    } 

    for(char c = fgetc(arquivo1); c != EOF; c = fgetc(arquivo1)) {
        int d = (int) c;
        fputc(d, arquivo3);
    }
    fprintf(arquivo3, "\n");
    for(char c = fgetc(arquivo2); c != EOF; c = fgetc(arquivo2)) {
        int d = (int) c;
        fputc(d, arquivo3);
    }
    fprintf(arquivo3, "\n");

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);
}