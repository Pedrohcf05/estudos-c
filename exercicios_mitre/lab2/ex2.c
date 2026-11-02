#include <stdio.h>
#include <string.h>

int contaVogal(char *s);

 int main(){
    char s[100];

    printf("Digite sua string:\n");
    fgets(s, sizeof(s), stdin);

    int resultado;
    resultado = contaVogal(s);
    printf("O numero de vogais que tem na sua string eh: %d\n", resultado);

    return 0;
 }

int contaVogal(char *s){
    int aux, tam;

    tam = strlen(s);

    for(int i = 0; i < tam; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            aux++;
        }
    }
    return aux;
}