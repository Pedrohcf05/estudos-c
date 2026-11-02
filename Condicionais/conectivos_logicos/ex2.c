#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Faça um programa que leia tres numeros inteiros e imprima na tela se os tres sao maiores que 10.

    int a,b,c;
    printf("Digite tres numeros inteiros quaisquer \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a > 10 && b > 10 && c > 10){
        printf("Numeros validos");
    }else{
        printf("Numeros invalidos");
    }
    return 0;
}