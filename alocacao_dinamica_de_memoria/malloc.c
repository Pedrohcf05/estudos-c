#include <stdio.h>
#include <stdlib.h>

// (void *)malloc(size_t size)

int main(){
    int *aux, i;
    aux = (int *)malloc(4*sizeof(int));

    if(aux != NULL){
        for(i = 0; i < 4; i++){
            *(aux + i) = i*5;
        }
        for(i = 0; i < 4; i++){
            printf("v[%d] = %d\n", i, *(aux + i));
        }

        free(aux);
        aux = NULL;

    }else{
        printf("Erro: Falha na alocacao de memoria.\n");
        return 1;
    }
    return 0;
}