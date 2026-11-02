#include <stdio.h>
#include <stdlib.h>

int main(){

    //Faça um programa que leia um numero inteiro e imprima na tela se ele esta entre 0 e 10

    int a;

    printf("Digite um numero inteiro qualquer \n");
    scanf("%d",&a);
    if(a > 0 && a < 10){
        printf("Numero valido \n");
    }else{
        printf("Numero invalido \n");
    }
    return 0;

}