#include <stdio.h>
#include <stdlib.h>

int grava(FILE* pFile,int N){
    int qtd = 0;
    for(int i = N; i >= 1; i--){
        qtd += fwrite(&i, sizeof(int), 1, pFile);
    }
    return qtd;
}

int *recupera(FILE* pFile){
    fseek(pFile, 0, SEEK_END);
    int total = ftell(pFile)/sizeof(int);
    int *novo = malloc(total * sizeof(int));
    if(novo == NULL){
        printf("Erro ao alocar memoria!");
        return NULL;
    }
    fseek(pFile, 0, SEEK_SET);
    int qtd = fread(novo, sizeof(int), total, pFile);
    if(qtd != total){
        printf("Problema na leitura!");
        free(novo);
        return NULL;
    }
    return novo;
}

void exibe_vetor(int* novo,int N){
    for(int i = 0; i < N; i++){
        printf("%d ", *(novo + i));
    }
}

int modifica(FILE* pFile, int M){
    
    fseek(pFile, 0, SEEK_END); // apontador vai para o final do arquivo
    int total = ftell(pFile)/sizeof(int); // total de variaveis no arquivo

    if(M <= 0 || M > total){ // verificação do limite aceitavel
        printf("Valor fora do intervalo permitido!");
        return -1;
    }
    fseek(pFile, -M * (long)sizeof(int), SEEK_END); // apontador vai para a posição desejada pelo usuário

    int var; // variavel que vai receber o conteudo lido do arquivo.
    int count = 0; // contador de iterações que acontecem no laço for, e que será retornado no fim da função.
    for(int i = 0; i < M; i++){
        if(fread(&var, sizeof(int), 1, pFile) != 1){ // lendo os arquivos do pFile e verificando possível erro
            return count;
        }
        if((var % 2) == 0){ // verificando se a variavel da posição atual eh par
            var = var * 2;
            fseek(pFile, -1 * (long)sizeof(int), SEEK_CUR); // voltando uma posição para sobrescrever o seu dobro.
            fwrite(&var, sizeof(int), 1, pFile); // escrevendo o novo valor
            fseek(pFile, 0, SEEK_CUR); // regra de funcionalidade do C. Pede sempre um fflush ou algo do tipo entre um fread e um fwrite.
        }
        count++;
    }
    return count;
}

void recupera_exibe(FILE* pFile){
    fseek(pFile, 0, SEEK_END);
    int total = ftell(pFile)/sizeof(int);
    int *vetor = malloc(total * sizeof(int));
    if(vetor == NULL){
        printf("Erro ao alocar memoria!");
        return;
    }
    fseek(pFile, 0, SEEK_SET);

    fread(vetor, sizeof(int), total, pFile);

    for(int i = 0; i < total; i++){
        printf("%d ", *(vetor + i));
    }
    free(vetor);
}