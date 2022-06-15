#include <stdio.h>

int main(){

    int saldo, aux;

    printf("Informe o valor do saldo: ");
    scanf("%d", &saldo);

    printf("Saldo: %d\n", saldo);

    if(saldo >= 0 && saldo <= 500){
        printf("Nenhum Crédito");
    }
    else if(saldo >= 501 && saldo <= 1000){
        aux = saldo * 0.3;
        printf("Crédito: %d", aux);
    }
    else if(saldo >= 1001 && saldo <= 3000){
        aux = saldo * 0.4;
        printf("Crédito: %d", aux);
    }
    else{
        aux = saldo * 0.5;
        printf("Crédito: %d", aux);
    }

    return 0;
}