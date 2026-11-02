#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornaBooleano();


int main(){

    bool variavelBooleana;

    variavelBooleana = retornaBooleano();

    if(variavelBooleana){
        printf("eh verdadeiro! \n");
    }else{
        printf("eh falso! \n");
    }

    return 0;
}

bool retornaBooleano(){
    return true;
}