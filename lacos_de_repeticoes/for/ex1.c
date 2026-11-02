#include <stdio.h>
#include <stdlib.h>

int main(){

    //Faça um programa que mostre a soma de todos os numeros de 0 a 10, adicionando o valor atual de i numa variavel soma, a cada repetição do laço for

    int i;
    int soma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("i = %d (soma = %d) \n", i, soma);
        soma = i + soma;
        
    }
    printf("O valor da soma de todos os numeros de 0 a 10 eh: %d \n", soma);
    return 0;
}