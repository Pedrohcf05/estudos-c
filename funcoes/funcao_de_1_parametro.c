#include <stdio.h>

void mostraSucessor(int numero){
    printf("\nO sucessor de %d eh: %d", numero, numero + 1);
}

int mostraAntecessor(int numero){
    return numero - 1;
}

int main(){

    // instrucao
    printf("Digite um valor:");

    // lendo o valor digigitado
    int a;
    scanf("%d", &a);

    // usando a funcao mostraSucessor para exibir o resultado.
    mostraSucessor(a);

    // usando a funcao mostraAntecessor para exibir o resultado.
    printf("\nO antecessor de %d eh: %d\n", a, mostraAntecessor(a));

    return 0;
}