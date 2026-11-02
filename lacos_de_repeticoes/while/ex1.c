#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Faça um programa que imprima de 50 até 0, diminuindo de 6 em 6.

    int i = 50;

    while (i >= 0){
        printf("%d \n", i);
        i -= 6;
    }
    
    return 0;

}