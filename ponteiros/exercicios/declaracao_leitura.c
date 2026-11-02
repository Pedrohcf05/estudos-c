#include <stdio.h>
#include <stdlib.h>

int main(){
    // definindo variaveis
    int x = 10;

    // criei meu ponteiro
    int *p;
    
    // O ponteiro p recebe o endereço de memoria de x.
    p = &x;

    // imprimindo x usando a notaçao so com a variavel.
    printf("O valor de x eh: %d \n", x);

    // imprimindo o endereco de memoria da variavel x.
    printf("O endereco de x eh: %p \n", (void *)p);

    // imprimindo a variavel x usando seu ponteiro ( *p ) que aponta para ela.
    printf("O valor de x usando seu ponteiro eh: %d \n", *p);


    return 0;
}