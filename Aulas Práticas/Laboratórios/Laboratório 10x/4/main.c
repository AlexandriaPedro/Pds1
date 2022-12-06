//4) Elabore um programa no qual o usuário informe o nome de um arquivo
//texto e uma palavra, e o programa informe o número de vezes que aquela
//palavra aparece dentro do arquivo.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE * arquivo;

    char nome_arquivo[50];
    scanf("%s", &nome_arquivo);

    char palavra[900];
    scanf("%s", &palavra);
    int recorrencia_palavra = 0;

    arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL) {
        printf("Deu ruim\n");
        
        return 1;
    }

    char palavra_qualquer[1000][900];
    int posicao = 0;
    while (fscanf(arquivo, "%s", palavra_qualquer[posicao]) != EOF) {
        if (strcmp(palavra_qualquer[posicao], palavra) == 0) {
            recorrencia_palavra ++;
        } else {
            posicao ++;
        }
    }

    printf("O arquivo %s apresentou a palavra: %s, %d vezes.", nome_arquivo, palavra, recorrencia_palavra);

    fclose(arquivo);
}