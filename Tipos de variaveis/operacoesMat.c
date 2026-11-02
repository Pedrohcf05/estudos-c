#include <stdio.h>
#include <stdio.h>

int main(){
    
    // Definindo variáveis 
    int a, b, soma, subtracao, multiplicacao, divisao, resto;

    // Recebe dois números inteiros do usuário
    printf("Escreva dois números inteiros quaisquer! \n");

    // ler as variáveis escritas pelo usuário
    scanf("%d %d", &a, &b);

    //soma os números recebidos
    soma = (a + b);

    // subtrai os números recebidos
    subtracao = (a - b);

    // multiplica os números recebidos
    multiplicacao = (a * b);

    // divide os números recebidos
    divisao = (a / b);

    //resto da divisao
    resto = (a % b);

    //valor absoluto
    printf("O valor absoluto de %d eh: %d \n",a, abs(a));
    
    // Imprime a variável soma
    printf("O valor da soma desses dois números é: %d \n", soma);

    // Imprime a variável subtracao
    printf("O valor da subtração desses dois números é: %d \n", subtracao);

    // Imprime a variável multiplicacao
    printf("O valor da multiplicação desses dois números é: %d \n", multiplicacao);

    // Imprime a variável divisao
    printf("O valor da divisão desses dois números é: %d \n", divisao);

    // Imprime o resto da divisao
    printf("O valor do resto da divisao desses dois números é: %d \n", resto);


    return 0;
}