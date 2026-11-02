#include <stdio.h>
#include <stdio.h>

typedef struct{
    int hora, minuto;
} t_momento;

void tempoatual(int percorrido, t_momento *momento){
    // o parametro percorrido recebeu do usuário, em minutos, o tempo percorrido desde o inicio do dia.
    // e para descobrirmos que horas sao no momento atual, dividimos o tempo total
    // ,em minutos, por 60.
    momento->hora = percorrido/60; 

    // para descobrirmos quantos minutos temos no momento atual vamos ver o resto da divisao
    // dos minutos totais por 60
    momento->minuto = percorrido % 60;
}

int main(){
    int num_testes;
    
    for(int i = 0; i < num_testes; i++){
        t_momento momento1, momento2, atual;
        int percorrido;
        int diferenca1, diferenca2;

        // Le os momentos do usuario
        scanf("%d %d", &momento1.hora, &momento1.minuto);
        scanf("%d %d", &momento2.hora, &momento2.minuto);

        // Le o tempo percorrido desde o inicio do dia.
        scanf("%d", &percorrido);

        // usa a função para descobrir o momento atual
        tempoatual(percorrido, &atual);

        diferenca1 = abs(momento1.hora - atual.hora);
        diferenca2 = abs(momento2.hora - atual.hora);

        if(diferenca1 <= diferenca2){
            printf("%02.d:%02.d", momento1.hora, momento1.minuto);
        }else{
            printf("%02.d:%02.d", momento2.hora, momento2.minuto);
        }
        

    }
    return 0;

}