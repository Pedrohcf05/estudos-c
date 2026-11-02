#include <stdio.h>
#include <stdlib.h>

int main(){

    //Crie um algoritmo que recebe de uma so vez 3 numeros inteiros, faca a multiplicacao deles, armazene em outra variavel propria para isso e depois imprima ela

    int x, y, z, resultado;

    printf("Digite tres numeros inteiros quaisquer: \n");
    scanf("%d %d %d",&x ,&y ,&z);

    resultado = (x * y *z);

    printf("O resultado da multiplicacao de %d, %d e %d eh: %d \n",x, y, z, resultado);

    return 0;

}