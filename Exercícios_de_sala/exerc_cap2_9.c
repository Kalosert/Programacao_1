#include <stdio.h>

int main(){

    int anoNasc, anoAtual, aux;

    printf("Informe o ano do seu nascimento: ");
    scanf("%d", &anoNasc);
    printf("Informe o ano em que nós estamos: ");
    scanf("%d", &anoAtual);

    aux = anoAtual - anoNasc;

    if(anoNasc > 0 && anoNasc < anoAtual){
        printf("Sua idade é: %d", aux);
    }
    else{
        printf("Data de nascimento inválida");
    }

    return 0;
}