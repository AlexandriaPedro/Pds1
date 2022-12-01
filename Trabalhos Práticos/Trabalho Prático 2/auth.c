#include "auth.h"

#include <stdlib.h>
#include <string.h>


#define TAM_ALFABETO 26
char *vignere(char *texto, char *chave) {
    // TODO

    int tamanho_chave = strlen(chave);
    int tamanho_texto =  strlen(texto);

    char compara[tamanho_texto];

    int c = 0;

    for (int i = 0; i < tamanho_texto; i ++) {
        if (c >= tamanho_chave) {
            c = 0;
        }

        compara[i] = chave[c];

        c ++;
    }
    
    char *texto_criptografado;
    texto_criptografado = (char *) malloc((tamanho_texto + 1) * sizeof(char));

    for (int i = 0; i < tamanho_texto; i ++) {
        int comeco = (int) compara[i] - (int) 'a';
        int diferenca =  (int) texto[i] - (int) 'a';

        int possivel_letra = comeco + diferenca;

        if (possivel_letra > 25) {
            possivel_letra = possivel_letra -  26;
        }

        texto_criptografado[i] = (char) ((possivel_letra) + (int) 'a');
    }

    texto_criptografado[tamanho_texto + 1] = '\0';

    return texto_criptografado;
}

char *des_vignere(char *cifrado, char *chave) {
    // TODO

    int tamanho_chave = strlen(chave);
    int tamanho_cifrado =  strlen(cifrado);

    char compara[tamanho_cifrado];

    int c = 0;

    for (int i = 0; i < tamanho_cifrado; i ++) {
        if (c >= tamanho_chave) {
            c = 0;
        }

        compara[i] = chave[c];

        c ++;
    }
    
    char *texto_descriptografado;
    texto_descriptografado = (char *) malloc((tamanho_cifrado + 1) * sizeof(char));

    for (int i = 0; i < tamanho_cifrado; i ++) {
        int comeco = (int) compara[i] - (int) 'a';
        int diferenca =  (int) cifrado[i] - (int) 'a';

        int possivel_letra = diferenca - comeco;

        if (possivel_letra < 0) {
            possivel_letra = 26 + possivel_letra;
        }

        texto_descriptografado[i] = (char) ((possivel_letra) + (int) 'a');
    }

    texto_descriptografado[tamanho_cifrado + 1] = '\0';

    return texto_descriptografado;
}

bool autenticar(Usuario u, BancoDados bd) {
    // TODO

    int tamanho_banco_de_usuarios = bd.n;

    int auxilar = -1;

    for (int i = 0; i < tamanho_banco_de_usuarios; i ++ ) {
        if (strcmp(u.usuario, bd.usuarios[i].usuario) == 0) {
            auxilar = i;

            break;
        }
    }

    if (auxilar == -1) {
        return false;
    } else {
        char *senha_descriptografada = des_vignere(bd.usuarios[auxilar].senha, bd.usuarios[auxilar].usuario);

        if (strcmp(senha_descriptografada, u.senha) == 0) {
                return true;
            } else {
                return false;
            }
    }
}
