#include <stdio.h>

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num >= 20 && num <= 50){
        printf("O número digitado está entre 20 e 50");
    }
    else{
        printf("O número digitado não está entre 20 e 50");
    }

    return 0;
}