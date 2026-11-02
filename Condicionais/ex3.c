#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia um numero inteiro e diga se ele e par ou nao.

    int a;
    printf("Digite um numero inteiro qualquer \n");
    scanf("%d",&a);
    if((a % 2) == 0){
        printf("%d eh par \n", a);
    }else{
        printf("%d eh impar \n",a);
    }
    return 0;
}