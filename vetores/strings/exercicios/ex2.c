#include <stdio.h>
#include <stdlib.h>

int main() {

    char string[255];

    printf("Digite sua palavra:");
    fgets(string, sizeof(string), stdin); // ler a string com espaços

    int cont = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') continue;
        cont++;
    }
    char palavra[255];

    for(int j = 0; j < cont; j++) {
        palavra[j] = string[cont - 1 - j];
    }
    palavra[cont] = '\0'; // nao esquece de fechar a string
    puts(palavra);
    
}