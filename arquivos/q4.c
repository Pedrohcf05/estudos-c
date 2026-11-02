#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 50

int main(){
    char nome_arq[MAX];
    char nome[MAX];
    float p1, p2, T;
    int n;

    printf("Nome do arquivo de saida:");
    scanf("%49s", nome_arq);

    printf("Numero de alunos:");
    scanf("%d", &n);

    FILE *arq;

    if((arq = fopen(nome_arq, "w")) == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Aluno %d (nome, p1, p2, T)", i + 1);
        scanf("%49s %f %f %f", nome, &p1, &p2, &T);
        fprintf(arq, "%s %.f %.f %.f\n", nome, p1, p2, T);
    }

    fclose(arq);
    return 0;
}