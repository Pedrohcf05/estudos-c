#include <stdio.h>
#include <stdlib.h>

//Faca um programa que recebe do usuario um valor inicial, um valor final e de quanto em quanto o i se altera e imprima todos os valores nos passos informados.

int main(){
    int valorI, valorF, i, j;

    printf("Digite seu valor inicial: \n");
    scanf("%d", &valorI);

    printf("Digite seu valor final: \n");
    scanf("%d", &valorF);

    printf("Digite de quanto em quanto seu valor se altera: \n");
    scanf("%d", &i);

    for(j = valorI; j <= valorF; j = j + i){
        
        printf("O numero eh: %d \n",j );
    }
    return 0;
}