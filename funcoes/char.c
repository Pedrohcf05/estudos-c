#include <stdio.h>
#include <stdlib.h>

char retornaLetra();

int main(){
    char letra;

    letra =  retornaLetra();

    printf("%c \n", letra);

    return 0;
}

char retornaLetra(){
    return 'x';
}