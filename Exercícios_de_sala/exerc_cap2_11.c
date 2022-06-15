#include <stdio.h>

int main(){

    int x1, x2, x3;

    printf("Digite 3 números: ");
    scanf("%d %d %d", &x1, &x2, &x3);

    if(x1 > x2 && x1 > x3){
        printf("%d", x1);
    }
    else if(x2 > x1 && x2 > x3){
        printf("%d", x2);
    }
    else{
        printf("%d", x3);
    }

    return 0;
}