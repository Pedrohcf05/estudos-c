#include <stdio.h>

void mostraVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d \n", vetor[i]);
    }
}

void modificaVetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        vetor[i] = vetor[i] + 1;
        printf("%d \n", vetor[i]);
    }
}

int main(){

    // definindo variavel.
    int v[3] = {1, 2, 3};

    // chamando a funcao para imprimir o vetor.
    mostraVetor(v, 3);

    // chamando a funcao que modifica o vetor.
    modificaVetor(v, 3);

    return 0;
}