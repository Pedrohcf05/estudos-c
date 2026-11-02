#include <stdio.h>
#include <stdlib.h>

int main() {

    char frase[255];

    printf("Digite sua frase:");
    fgets(frase, sizeof(frase), stdin);

    int cont = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] ==  'a') {
            cont++;
        }else if (frase[i] == 'e') {
            cont++;
        }else if (frase[i] == 'i') {
            cont++;
        }else if (frase[i] == 'o') {
            cont++;
        }else if (frase[i] == 'u') {
            cont++;
        }
        
    }
    printf("A quantidade de vogais eh: %d\n", cont);
    return 0;
}