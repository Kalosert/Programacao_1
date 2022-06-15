#include <stdio.h>

int main(){

    int num;

    scanf("%d", &num);

    if((3%num) == 0 && (7%num == 0)){
        printf("O número %d é divisível por 3 e 7", num);
    }
    else{
        printf("Esse número não é divisível por 3 e 7");
    }

    return 0;
}