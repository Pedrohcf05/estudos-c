#include <stdio.h>
#include <stdlib.h>

int main(){

    // definindo variaveis.
    int linhas, colunas;
    int **matriz;

    // lendo o tamanho pelo usuário.
    printf("Digite o numero de linhas:\n");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas:");
    scanf("%d", &colunas);

    // alocando as linhas
    matriz = (int **) malloc(linhas * sizeof(int *));

    // alocando memoria para as colunas de cada linha.
    for(int i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    // preenchendo valores e exibindo a matriz.
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    // libera a memoria
    free(matriz);

    return 0;
}