#include <stdio.h>
#include <stdlib.h>

int main(){

    //Faça um programa que leia dois numeros inteiros e imprima na tela qual e o maior entre eles ou se sao iguais.

    int a, b;
    printf("Digite dois numeros inteiros quaisquer: \n");
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("%d eh maior que %d \n",a,b);
    }else if(b > a){
        printf("%d eh maior que %d \n",b,a);
    }else{
        printf("%d e %d sao iguais \n",a,b);
    }
    return 0;

}