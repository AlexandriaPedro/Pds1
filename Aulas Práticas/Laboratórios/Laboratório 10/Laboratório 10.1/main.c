#include <stdio.h>
#include <stdlib.h>

#include "agenda.h"

#include <string.h>

int main(int argc, char *argv[]) {
    char arquivo[100];

    scanf("%s", &arquivo);

    int k;

    scanf("%d\n", &k);

    for(int i = 0; i < k; i++) {
        Contato c = criar_contato();
        inserir_contato(arquivo, c);
    }

    exibir_contatos(arquivo);

    return 0;
}
