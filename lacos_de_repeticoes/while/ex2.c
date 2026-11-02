#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Faça um programa que imprima os números pares de 10 até um número informado pelo usuário

    int i = 10, j;

    printf("Digite um numero inteiro qualquer: \n");
    scanf("%d", &j);


    while (i <= j){
        if ((i % 2) == 0){
            printf("%d eh par \n\n", i);
            i += 1;

        }else{ 
            printf("%d nao eh par \n\n", i);
            i += 1;
            }
        
    }
    
    return 0;
    
}