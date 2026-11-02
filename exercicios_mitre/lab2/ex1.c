#include <stdio.h>

int aumentaSalario(int *sal, int perc);

int main(){
    int salarioAtual, percentual;

    printf("Digite seu salario atual:\n");
    scanf("%d", &salarioAtual);
    printf("Digite seu percentual de aumento:\n");
    scanf("%d", &percentual);

    int resultado;
    resultado = aumentaSalario(&salarioAtual, percentual);
    printf("O seu novo salario eh: %d\n", resultado);

    return 0;
}

int aumentaSalario(int *sal, int perc){

    int aux;
    aux = *sal;
    int novoSalario;
    novoSalario = aux + (aux * perc /100);
    
    return novoSalario;

}