#include <stdio.h>

void troca();

int main(){

    int x, y;
    printf("Escreva um valor para x: \n");
    scanf("%d", &x);
    printf("Escreva um valor para y: \n");
    scanf("%d", &y);

    printf("Valor de x: %d\nValor de y: %d \n", x, y);

    troca(&x, &y);


    return 0;

}

void troca(int *a, int *b){

    // defino uma variavel auxiliar so para armazenar o valor de x que vem da main
    int aux;

    // armazeno em aux o valor de x da main que esta no meu ponteiro a
    aux = *a;

    // ponteiro a recebe o valor de y que estava no ponteiro b
    *a = *b;

    // ponteiro b recebe o valor inicial de x que armazenamos na variavel auxiliar;
    *b = aux;

    printf("O valor de x agora eh: %d\nO valor de y agora eh: %d\n", *a, *b);

}