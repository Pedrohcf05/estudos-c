#include <stdio.h>
#include <stdlib.h>

int main(){

    //Faça um programa que de calculadora, que leia dois valores e mostre na tela as opções de somar e subtrair. Após selecionar a opção o resultado será mostrado na tela, baseado em um switch.


    float x, y;
    printf("Digite seus dois numeros: \n");
    scanf("%f %f", &x, &y);

    printf("Escolha sua operacao:   \n");
    printf("1 - soma                \n");
    printf("2 - subtracao           \n");

    int opcao;
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("o resultado da soma de seus numeros eh: %.2f \n", (x + y));
        break;

    case 2:
        printf("O resultado da subtracao de seus numeros eh: %.2f \n", (x - y));
        break;

    default:
        break;
    }


    return 0;

}