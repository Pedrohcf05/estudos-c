#include <stdio.h>
#include <stdlib.h>

int main(){

    //Faça um programa que leia dois numeros inteiros e imprima na tela se algum deles e maior que 10.

    int a,b;
    printf("Digite dois numeros inteiros quaisquer \n");
    scanf("%d %d",&a,&b);
    if(a > 10 || b > 10){
        if(a > 10){
            printf("%d eh maior que 10 \n",a);
        }else{
            printf("%d eh maior que 10 \n",b);
        }
    }else{
        printf("Nenhum dos numeros eh maior que 10");
    }
    return 0;

}