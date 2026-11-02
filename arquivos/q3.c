#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 202 // Inclui os 200 caracteres, o '\n' e o '\0'.

int main(int argc, char *argv[]){
    char linha[MAX];
    int c;
    FILE *ent, *sai;
    if(argc != 3){
        printf("limite de parametros excedido.");
        return -1;
    }
    
    if ((ent = fopen(argv[1], "r")) == NULL){
        printf("Erro ao abrir o arquivo de entrada.");
        return 1;
    }

    if ((ent = fopen(argv[2], "w")) == NULL){
        printf("Erro ao abrir o arquivo de saida.");
        return 1;
    }

    while(fgets(linha, MAX, ent) != EOF){
        int tam = strlen(linha);
        int tem_quebra = 0;

        if(tam > 0 && linha[tam - 1] == '\n'){
            linha[tam - 1] = '\0';
            tam--;
            tem_quebra = 1;
        }

        for(int i = 0, j = tam - 1; i < j; i++, j--){
            char aux = linha[i];
            linha[i] = linha[j];
            linha[j] = aux;

        }

        fputs(linha, sai);
        if(tem_quebra) fputc('\n', sai);

    }

    fclose(ent);
    fclose(sai);
    return 0;


}
