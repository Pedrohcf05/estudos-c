#include <stdio.h>

int somaDez(int *numero){
    *numero = *numero + 10;
}




int main(){

    // definindo variaveis.
    int a = 5;

    // exibindo variavel inicial.
    printf("%d \n", a);

    // chamando a funcao para mudar o valor da variavel a.
    somaDez(&a);

    // exibindo a variavel inicial + 10.
    printf("%d \n", a);
    
    // chamando a funcao para mudar o valor de novo.
    somaDez(&a);

    // exibindo o novo valor.
    printf("%d \n", a);


    return 0;
}