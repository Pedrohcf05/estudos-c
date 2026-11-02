#include <stdio.h>
#define LINHA 2
#define COLUNA 3


int main(){
    int matriz[LINHA][COLUNA];

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;

}