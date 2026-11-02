#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Faça um programa que mostra a soma de dois valores de dois numeros entre 5 e 10, apenas quando os dois numeros digitados estiverem no intervalo.

    int i, j;
    int maximo = 10;
    int minimo = 5;


    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d",&i, &j);
    
    while (i < minimo || i > maximo || j < minimo || j > maximo){

        printf("Numero fora do intervalo [%d %d]. \n", minimo, maximo);
        printf("Digite numeros novos \n");
        scanf("%d %d", &i, &j);

    }

    printf("A soma dos numeros eh: %d \n", (i + j));
    
    
    
    return 0;

}