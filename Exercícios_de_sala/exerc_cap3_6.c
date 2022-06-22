#include <stdio.h>

int main(){

    int i;
    int x1=1, x2=1, aux;

    for(i = 2; i <=20; i++){
        aux = x2;
        x2 = x1 + x2;
        printf("%d\n", x2);
        x1 = aux;
    }

    return 0;
}