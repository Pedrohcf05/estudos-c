#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]){ // Usando as funcoes de entrada argc e argv pois leremos tudo do terminal
    int c;
    FILE *ent, *sai; // criando ponteiros do tipo FILE para termos acessos a arquivos externos

    if(argc != 3){  // Verificando se temos como entrada apenas 3 termos como o esperado ./q2 <arquivo_entrada> <arquivo_saida>
        printf("erro!");
        return -1;
    }

    if(ent = fopen(argv[1], "r") == NULL){  // Testando se o arquivo nao tem nenhum problema na hora da abertura
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    if(sai = fopen(argv[2], "w") == NULL){ // testando se o arquivo nao tem nenhum problema na hora da abertura
        printf("Erro ao abrir o arquivo de saida.");
        return 1;
    }

    c = fgetc(ent);  // lendo os caracteres do aquivo de entrada.
    while(!feof(ent)){ // enquanto o caracter for diferente de EOF
        fputc(toupper(c), sai); // Coloca no arquivo de saida ja todos os caracteres de forma maiuscula no arquivo de saida
        c = fgetc(ent); // Pega um novo caractere
    }

    fclose(ent); // fecha o arquivo de entrada
    fclose(sai); // fecha o arquivo de saida
    return 0;
}