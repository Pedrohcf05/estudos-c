#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // Esse algoritmo recebera duas notas e falara o valor absoluto da diferenca entre elas

    // definindo variaveis
    double nota1, nota2, diferenca;

    printf("Digite sua primeira nota: \n");
    scanf("%lf", &nota1);

    printf("Digite sua segunda nota: \n");
    scanf("%lf", &nota2);

    diferenca = (nota1 - nota2);

    printf("O valor absoluto da diferenca entre suas notas eh: %.2lf \n", fabs(diferenca));



    return 0;
}