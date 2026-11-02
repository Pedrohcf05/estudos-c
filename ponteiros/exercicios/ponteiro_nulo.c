#include <stdio.h>

int main(){
    int *p = NULL;

    if(p == NULL){
        printf("Erro! \n");
    }

    // definindo variavel
    int x = 10;

    // o ponteiro p agora aponta para o endereco de memoria da variavel x.
    p = &x;

    // imprimindo o que o ponteiro p aponta.
    printf("%d \n", *p);

    return 0;
}