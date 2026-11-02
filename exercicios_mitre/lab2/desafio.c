#include <stdio.h>
#include <stdlib.h>

int max_index(int *v, int n);

int main(){
    int n;
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }

    printf("%d\n", max_index(v, n)); // passa o tamanho junto.
    return 0;
}

int max_index(int *v, int n){
    int idx = 0;        // indice do maior ate agora
    int maior = *v;     // começa com o primeiro elemento em caso de empate

    for(int i = 1; i < n; i++){
        if (*(v + i) > maior) {     // > estrito: mantem o primeiro em caso de empate.
            maior = *(v + i);
            idx = i;
        }
    }
    return idx;
}