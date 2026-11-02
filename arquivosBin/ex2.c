#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct 
{
    char nome[100];
    double nota[3];
    double media;
} Taluno;

/* Escreva um programa que crie um arquivo binário chamado
"alunos.dat" para gravar os dados sobre alunos de uma turma.
Devem ser solicitados ao usuário, sobre cada aluno: o nome e as notas
em três avaliações. A média aritmética das 3 notas (P1, P2 e P3) deve
ser calculada pelo programa para cada um dos alunos. Esses dados
devem ser armazenados no arquivo binário, utilizando a estrutura
Taluno abaixo: */

int main(){
    FILE *arq;
    arq = fopen("alunos.dat", "wb+");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo!");
        return -1;
    }

    Taluno aluno;

    printf("Escreva o nome do aluno:\n");  // Pede ao usuário o nome do aluno
    fgets(aluno.nome, sizeof(aluno.nome), stdin); // Le o nome do aluno.

    while(aluno.nome[0] != '\n'){ // Laço de repetição que funciona enquanto o nome do aluno for diferente de '\n', que seria quando o usuario aperta enter sem escrever nada.
        aluno.nome[strcspn(aluno.nome, "\n")] = '\0'; // Remove o '\n' no final do nome.
        printf("Digite suas tres notas: \n");
        scanf("%lf %lf %lf", &aluno.nota[0], &aluno.nota[1], &aluno.nota[2]);
        aluno.media = (aluno.nota[0] + aluno.nota[1] + aluno.nota[2])/3; // Faz a media aritmetica das notas do aluno.

        fwrite(&aluno, sizeof(Taluno), 1, arq); // Escreve no arquivo as informações do aluno, escritas no struct.
        getchar(); // REMOVE O \n QUE FICOU NO BUFFER DEPOIS DO SCANF

        printf("Escreva o nome do aluno:\n"); // Recomeça o laço pedindo o nome do aluno.
        fgets(aluno.nome, sizeof(aluno.nome), stdin);

    }
    fclose(arq); // Fecha o arquivo.
    return 0;
}