#include <stdio.h>

void mostraSoma(int x,int y){
    printf("\nA soma de %d + %d eh: %d", x, y, x+y);
}

int retornaSoma(int x, int y){
    return x + y;
}

int main(){

    // definindo variaveis
    int a = 5, b = 7;

    // funcao que mostra a soma.
    mostraSoma(a,b);

    // funcao que retorna a soma.
    printf("\nA soma de %d + %d eh: %d", a, b, retornaSoma(a,b));

    return 0;
}