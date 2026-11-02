#include <stdio.h>
#include <stdlib.h>

//Crie um algoritmo que leia 3 valores de um vetor de 3 posicoes e depois calcule a media dos valores acessando o vetor.

int main(){

    int i, vetor[3]; // vetor[3], esse 3 e o tamanho do vetor ele pode armazenar ate 3 valores, começando na posiçao 0 e indo ate 2

    for(i = 0; i < 3; i++){
        printf("Digite um valor: \n");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 3; i++){
        printf("\nvetor[%d] = %d", i, vetor[i]);
    }
    printf("\nA media eh: %d\n", (vetor[0] + vetor[1] + vetor[2])/3);
    return 0;
}