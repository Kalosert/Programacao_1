#include <stdio.h>

int main() {

 	float x1, x2, saldo;
  	
  	scanf("%f", &x1);
	scanf("%f", &x2);
	
	saldo= x1 - x2;
    
    printf("O saldo de hoje é: %.2f\n", saldo);
  
  	if(saldo > 2000){
  	    printf("Valor total de dinheiro recebido: %.2f\n", x1);
  		printf("Valor total de pagamentos realizados: %.2f\n", x2);
  		printf("Saldo positivo atual: %.2f\n", saldo);
  	}
  	else if(saldo < -500){
  	    printf("Valor total de dinheiro recebido: %.2f\n", x1);
  		printf("Valor total de pagamentos realizados: %.2f\n", x2);
  		printf("Saldo negativo atual: %.2f\n", saldo);
  	}
}
