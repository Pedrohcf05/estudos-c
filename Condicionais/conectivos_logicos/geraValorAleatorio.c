#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    //faça um programa que joga 3 dados(6 lados) aleatorios e exibe o resultado da soma dos 3 valores gerados na tela
    

    // Usa o tempo atual como semente.
    srand(time(NULL));

    // defini o intervalo
    int maximo = 6;
    int minimo = 1;


    int dado1 = (rand() % (maximo - minimo + 1)) + minimo;
    int dado2 = (rand() % (maximo - minimo + 1)) + minimo;
    int dado3 = (rand() % (maximo - minimo + 1)) + minimo;

    printf("Numeros gerados: %d %d %d \n",dado1, dado2, dado3 );
    printf("Resultado da soma dos numeros gerados: %d \n", (dado1 + dado2 + dado3));



    return 0;
}