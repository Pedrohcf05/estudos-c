#include <stdio.h>

void dobra();

int main(){
    int x;
    printf("Digite um valor:");
    scanf("%d", &x);

    dobra(&x);

    return 0;
}

void dobra(int *n){

    int aux;
    aux = *n;
    *n = 2 * aux;
    printf("O valor era: %d\nE seu dobro eh: %d\n", aux, *n);

}