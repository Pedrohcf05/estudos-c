#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char palavra[255];

    printf("Digite a sua palavra:");
    scanf("%s", palavra); // ler string sem espaço

    int cont = 0;
    char palindromo[255];
    for ( int i = 0; palavra[i] != '\0'; i++) {
        cont++;
    }
    for (int j = 0; j < cont; j++) {
        palindromo[j] = palavra[cont - 1 - j];
    }
    palindromo[cont] = '\0';

    int igual = 1;
    for (int k = 0; k < cont; k++) {
        if (palavra[k] != palindromo[k]) {
            igual = 0;
            break;
        }
    }

    if (igual) {
        printf("%s eh palindromo.", palavra);
    }else {
        printf("%s nao eh palindromo.", palavra);
    }
    return 0;
}