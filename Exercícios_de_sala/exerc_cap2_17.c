#include <stdio.h> 

int main(){

    int idade;
    char nome[40];

    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    printf("Informe o seu nome: ");
    scanf("%s", nome);

    if(idade <= 10){
        printf("Nome: %s\n", nome);
        printf("Valor a ser pago R$30,00");
    }
    else if(idade > 10 && idade <= 29){
        printf("Nome: %s\n", nome);
        printf("Valor a ser pago R$60,00");
    }
    else if(idade > 29 && idade <= 45){
        printf("Nome: %s\n", nome);
        printf("Valor a ser pago R$120,00");
    }
    else if(idade > 45 && idade <= 59){
        printf("Nome: %s\n", nome);
        printf("Valor a ser pago R$150,00");
    }
    else if(idade > 59 && idade <= 65){
        printf("Nome: %s\n", nome);
        printf("Valor a ser pago R$250,00");
    }
    else{
        printf("Nome: %s\n", nome);
        printf("Valor a ser pago R$400,00");
    }

    return 0;
}