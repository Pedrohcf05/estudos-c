#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char nome_arquivo[256];
    scanf("%255s", nome_arquivo);

    FILE *f = fopen(nome_arquivo, "r");
    if( f == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int cont[5] = {0};
    int c;

    while((c = fgetc(f)) != EOF){
        c = tolower(c);
        for(int k = 0; k < 5; k++){
            if(c == vogais[k]){
                cont[k]++;
                break;
            }
        }
    }
    fclose(f);

    for(int k = 0; k < 5; k++){
        printf("%d %d\n", vogais[k], cont[k]);
    }
    return 0;

}