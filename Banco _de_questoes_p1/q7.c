#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int codigo;
    char nome[50];
    double preco;
    int quantidade;
} Produto;


void quantidadeProdutosArquivo(FILE *f, int *x) {
    fseek(f, 0, SEEK_END); // vai para o ultimo byte do arquivo.
    long cont = ftell(f); // cont recebe numero de bytes da posiçao de onde esta o cursor
    *x = (cont/sizeof(Produto)); // O conteudo apontado por x recebe a quantidade de produtos do arquivo
    fseek(f, 0, SEEK_SET); //volta para o inicio do arquivo.

}

Produto *alocarProdutos(int n){
    Produto *v;
    v = malloc(n * sizeof(Produto));
    if (v == NULL){
        return NULL;
    }
    return v;    
}

int lerArquivoBinario(FILE *f, Produto *produtos, int n){
    return fread(produtos, sizeof(Produto), n, f);
}

int gravarRelatorioTexto(char *nomeArq, Produto *produtos, int n){
    Produto *p = produtos;
    FILE *j = fopen(nomeArq, "w");
    if(j == NULL){
        return 0;
    }
    double total = 0;
    for(int i = 0; i < n; i++){
        double valor = p -> preco * p -> quantidade;
        fprintf(j, "%d %s %.2f\n", p -> codigo, p -> nome, valor);
        total += valor;
        p++;

    }
    fprintf(j, "---Total = %.2f\n", total);
    fclose(j);
    return 1;

}