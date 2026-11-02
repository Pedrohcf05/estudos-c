#include <stdio.h>

int max_index(int *v, int tamanho){
    int maior = *v; //pega o primeiro valor (v[0]) via ponteiro
    int indice = 0;

    for(int i = 1; i < tamanho; i++){
        if(*(v + i) > maior) { //acessa v[i] usando ponteiro
            maior = *(v + i);
            indice = i;
        }
    }

    return indice;
}

int main(){
    int n;

    printf("Digite a quantidade de numeros: \n");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os %d numeros: \n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    int resultado = max_index(vetor, n);

    printf("%d\n", resultado);

    return 0;
}
