#include <stdio.h>

int main(){
    int idade = 25;
    int *p = &idade;

    *p = 30;

    printf("%d \n", idade);

    return 0;
}