#include <stdio.h>

int main(){

    int nums[5] = {10, 20, 30, 40, 50};

    int *p = nums; // p aponta para o primeiro elemento, nums[0] == 10.

    for(int i; i < 5; i++){
        printf("%d\n", *p); // imprime para onde o ponteiro p esta apontando. 
        p++; // avanca p para o proximo elemento, nums[1].
    }

    return 0;
}