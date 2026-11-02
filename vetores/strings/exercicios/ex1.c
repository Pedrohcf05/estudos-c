#include <stdio.h>
#include <stdlib.h>

int main() {

    char string[255];
    printf("Digite sua string: \n");
    // int c;
    // while((c = getchar()) != '\n' && c != EOF); // Limpa buffer de entrada mas nao e necessario agora pois nao tem nenhum scanf antes.
    fgets(string, sizeof(string), stdin); // le a string com espacos

    int cont = 0;
    for(int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') continue;
        cont++;
    }

    printf("A quantidade de caracteres eh: %d \n", cont);

    return 0;
}   