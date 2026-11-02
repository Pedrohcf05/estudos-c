#include <stdio.h>
#include <stdlib.h>

// So coloquei uma representação dela aqui na parte de cima para a main saber de sua existencia
int retornaDez();

float retornaQuebrado();

int main(){
    int a;
    float b;

    // Passando o retorno de uma funcao para uma variavel.
    a = retornaDez();
    b = retornaQuebrado();

    printf("%d \n", a);
    printf("%.2f \n", b);

    return 0;
}


int retornaDez(){
    return 10;
}

float retornaQuebrado(){
    return 5.5;
}