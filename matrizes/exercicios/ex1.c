#include <stdio.h>
#define LINHA 2
#define COLUNA 2


    // Preencha uma matriz 2x2 lendo valores do usuário e
    // depois troque os valores entre a primeira e a segunda linha

int main(){
    int matriz[LINHA][COLUNA];
    int aux1, aux2;

    
    // Recebe do usuario cada valor de cada posiçao da matriz
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            printf("Digite o valor [%d] [%d].", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    // Auxiliares
    aux1 = matriz[0][0];
    aux2 = matriz[0][1];

    // Invertendo os valores com as auxiliares
    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;
    
    // Imprimindo a matriz ja invertida
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}