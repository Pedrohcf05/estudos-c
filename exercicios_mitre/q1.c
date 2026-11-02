#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ocorrencia(char *s1, char *s2);

int main(){

    char str1[100];
    char str2[100];
    

    printf("Digite sua primeira string.\n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    
    printf("Digite sua segunda string.\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
   
    
    int resultado = ocorrencia(str1, str2);
    printf("%d\n", resultado);

    return 0;

}


int ocorrencia(char *s1, char *s2){
    int n1 = strlen(s1);
    int n2 = strlen(s2);

    for(int i = 0; i + n2 <= n1; i++){
        int j = 0;
        while(j < n2 && tolower((unsigned char)s1[i + j]) == tolower((unsigned char)s2[j])){
            j++;
        }
        if(j == n2){
            return 1;
        }
    }
    return 0;
}