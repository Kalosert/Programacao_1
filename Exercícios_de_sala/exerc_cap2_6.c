#include <stdio.h>

int main(){

    float salario, prestacao;
    float aux;

    printf("Informe o seu salário: ");
    scanf("%f", &salario);
    printf("Informe o valor da prestação: ");
    scanf("%f", &prestacao);

    aux = (salario * 0.3);

    if(prestacao <= aux){
        printf("Empréstimo concedido");
    }
    else{
        printf("Empréstimo não concedido");
    }

    return 0;
}