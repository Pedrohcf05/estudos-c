#include <stdio.h>
#include <stdlib.h>

// estrutura de dados que representa um momento do dia (hora e minuto)
typedef struct {
    int hora, minuto;

} t_momento;

void tempoatual (int percorrido, t_momento *momento) {
    momento->hora = percorrido / 60;
    momento->minuto = percorrido % 60;

}

int main(int argc, char *argv[]){
    int num_testes;
    int i;

    num_testes = atoi(argv[1]);

    for (i = 0; i < num_testes; i++){
        t_momento momento1, momento2, atual;
        int percorrido;
        int diferenca1, diferenca2;

        //le os dois momentos informados pelo usuario
        scanf("%d %d", &momento1.hora, &momento1.minuto);
        scanf("%d %d", &momento2.hora, &momento2.minuto);

        //le o tempo percorrido desde o inicio do dia (em minutos)
        scanf("%d", &percorrido);

        //calcula o tempo atual usando a funcao tempoatual
        tempoatual(percorrido, &atual);

        //calcula a diferenca da hora de cada momento informado e da hora do momento atual
        //uso do abs para termos os valores em modulo
        diferenca1 = abs(momento1.hora - atual.hora);
        diferenca2 = abs(momento2.hora - atual.hora);

        //condicional para o caso de empate
        if (diferenca1 <= diferenca2) {
            printf("%02d:%02d\n", momento1.hora, momento1.minuto);
        } else {
            printf("%02d:%02d\n", momento2.hora, momento2.minuto);
        }
    }
    return 0;
}