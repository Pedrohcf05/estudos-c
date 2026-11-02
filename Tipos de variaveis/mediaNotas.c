#include <stdio.h>
#include <stdlib.h>

int main(){

    // Nesse algoritmo ele ira receber duas notas e ira fazer a media entre elas.

    float a, b, media;

    // Imprime essa frase pedindo ao usuario que digite sua nota
    printf("Escreva sua primeira nota: \n");

    // le as notas digitadas pelo usuario
    scanf("%f",&a);

    // Imprime essa frase pedindo ao usuario que digite sua nota
    printf("Escreva sua segunda nota: \n");

    // le as notas digitadas pelo usuario
    scanf("%f",&b);

    // calculo da media 
    media = (a + b)/2;

    // imprime o resultado da media
    printf("A media das notas %f e %f eh: %.2f \n", a, b, media);

    return 0;

}