#include <stdio.h>
#include <stdlib.h>

int main(){

    // Faça um programa que receba dois numeros inteiros e imprima na tela se a soma entre eles é maior ou igual a 10 ou menor que 10.
    
    int a, b, soma;

    printf("Digite dois numeros inteiros quaisquer: \n");
    scanf("%d %d",&a,&b);

    soma = (a + b);

    if(soma >= 10){
        printf("%d eh maior/igual a 10 \n", soma);

    }else{
        printf("%d eh menor que 10 \n", soma);
    }
    return 0;

}