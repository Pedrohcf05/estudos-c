#include <stdio.h>
#include <stdlib.h>

int main(){
    // Variavel
    int a = 20;

    // Imprimindo a variavel
    printf("O valor de a eh: %d \n", a);

    // Imprimindo o endereço da variavel
    printf("O endereco de a eh: %d \n", &a);

    // Variaveis armazenam valores
    int b = 10;

    // Ponteiros armazenam posiçoes na memoria
    int *ponteiro;

    // Ponteiro recebendo a posicao na memoria da variavel b.
    ponteiro = &b;

    // Imprimindo a variavel
    printf("O valor de b eh: %d \n", b);

    // * pode ser lido como "Conteudo apontado por".
    *ponteiro = 40;

    //imprimindo o valor de uma variavel.
    printf("O valor de b eh: %d \n", b);

    return 0;

}