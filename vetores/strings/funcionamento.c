#include <stdio.h>
#include <stdlib.h>

int main() {
    char palavra1[] = "boi";
    char palavra2[5] = "bala";
    char palavra3[] = {'a', 'b', 'c', 'd', '\0'};
    char palavra4[5] = {'f', 'o', 'n', 'e', '\0'};

    //imprimindo strings sem espaco
    printf("%s \n", palavra1);

    //lendo uma string sem espacos
    printf("Digite uma palavra de ate 4 letras. \n");
    fflush(stdin);
    scanf("%s", palavra2);

    //lendo uma string com espacos
    char fruta[255];
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Digite o nome de uma fruta. \n");
    fgets(fruta, sizeof(fruta), stdin);

    //imprimindo fruta lida
    printf("Fruta lida:");
    puts(fruta);

    return 0;
}