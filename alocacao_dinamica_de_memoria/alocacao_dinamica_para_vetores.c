#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho){

    // É criado um ponteiro auxiliar.
    int *aux;

    // A memória é alocada e o ponteiro recebe o endereço de memória dele.
    aux = (int*) malloc(tamanho * sizeof(int));

    // esse é o ponteiro retornado
    return aux;
}

int main(){

    // ponteiro que vai apontar para o vetor criado.
    int *vetor, tamanho;

    // lendo o tamanho do vetor.
    printf("Digite o tamanho do vetor:");
    scanf("%d", &tamanho);

    // Vetor vai receber um endereço de memória com o vetor que foi alocado.
    // ponteiro = endereço_de_memoria ou ponteiro.
    // *ponteiro =  VALOR.
    vetor = alocaVetor(tamanho);

    // alocando alguns valores no vetor.
    for(int i = 0; i < tamanho; i++){
        vetor[i] = vetor[i] + 10;
    }

    // imprimindo o vetor,
    for(int j = 0; j < tamanho; j++){
        printf("%d \n", vetor[j]);
    }

    free(vetor);
    return 0;
}
