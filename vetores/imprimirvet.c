#include <stdio.h>
#define TAM 5

int main() {
    int vet[TAM] = {1,2,3,4,5};

    for (int i = 0; i < TAM ; i++) {
        printf("%d\n", vet[i]);
    }
    return 0;
}