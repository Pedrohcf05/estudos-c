#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, *ip, *jp;
    char c, *cp;

    // O ponteiro cp aponta para c.
    cp = &c;
    
    // O conteudo apontado por *cp recebe o caractere 'z'.
    *cp = 'z';
    printf("c = %c\n", c);

    i = 10;

    // O ponteiro ip aponta para i.
    ip = &i;
    // Nessa linha imprimimos o endereço de memoria de ip.
    printf("ip = %p\n", ip);

    // O conteudo apontado por *ip recebe o valor apontado por *ip.
    printf("*ip = %d\n", *ip);

    jp = NULL;
    *jp = i; // incorreto pois jp nao aponta para uma variavel.
    return 0;
}