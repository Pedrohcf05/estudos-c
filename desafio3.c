#include <stdio.h>
#include <stdlib.h>

int main() {
    int L, C, M, N;

    // le os dados de entrada
    scanf("%d %d %d %d", &L, &C, &M, &N);

    // aloca a matriz L x C dinamicamente
    int **matriz = (int **) malloc(L * sizeof(int *));
    for (int i = 0; i < L; i++){
        matriz[i] = (int *) malloc(C * sizeof(int));
    }

    // le a quantidade de margaridas de cada vaso
    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    // vai guardar a maior soma de um lote
    int maior = -1;

    for (int li = 0; li < L; li = li + M){
        for (int lj = 0; lj < C; lj = lj + N){

            //soma todas as margaridas do lote que comeca em (li, lj)
            int soma = 0;
            for (int i = li; i < li + M; i++){
                for (int j = lj; j < lj + N; j++){
                    soma = soma + matriz[i][j];
                }
            }
            // se precisar atualiza a maior soma
            if (soma > maior) {
                maior = soma;
            }
        }
    }

    printf("%d\n", maior);

    // libera a memoria alocada
    for (int i = 0; i < L; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}