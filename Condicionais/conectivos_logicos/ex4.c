#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Faça um programa que leia 2 numeros inteiros e imprima na tela se algum deles for par.

    int a, b;
    printf("Digite dois numeros inteiros quaisquer \n");
    scanf("%d %d",&a,&b);
    if((a % 2 == 0) || (b % 2 == 0)){
        printf("algum desses valores eh par \n");
    }else{
        printf("Nenhum valor eh par \n");
    }
    return 0;
}