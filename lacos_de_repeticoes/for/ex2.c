#include <stdio.h>
#include <stdlib.h>

// Faca um programa que gere a tabuada de um numero dito pelo usuario.

int main(){

    int numero;
    int i;
    int resultado;
    printf("Digite o numero que voce deseja: \n");
    scanf("%d", &numero);

    for(i = 0; i <= 10; i++){
        resultado = i * numero;
        printf("%d x %d = %d \n",numero,i,resultado);
    }
}