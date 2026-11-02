#include <stdio.h>
#include <stdlib.h>

void main(){

    // Recebe um número inteiro qualquer e retorna a confirmação do próprio número
    int a;
    printf("Escreva um numero inteiro qualquer \n");
    scanf("%d", &a);
    printf("O valor de a e = %d \n", a);
    
    // Recebe um número qualquer e retorna a confirmação do número
    float b;
    printf("Escreva um numero qualquer \n");
    scanf("%f", &b);
    printf("O valor de a e = %f \n", b);

    // Lendo letra
    char letra;
    printf("Escreva uma letra qualquer \n");
    // Esse fflush(stdin) é uma função que limpa o buffer para podermos conseguir usar a operação lendo letra que criamos.
    fflush(stdin);
    scanf(" %c", &letra);
    printf("A letra e = %c \n", letra);
}