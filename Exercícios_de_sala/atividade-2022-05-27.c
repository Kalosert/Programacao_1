/*

2019201333

Declarar variáveis float: x1, x2, aux, saldo.
Atribuir x1=0, x2=0, saldo=0.
Perguntar o valor recebido da segunda.
Ler o valor recebido da segunda em aux.
Somar aux com x1.
Perguntar o valor de saída da segunda.
Ler o valor de saída da segunda em aux.
Somar aux com x2.
Somar x1 com x2 e armazenar em saldo.
Imprimir na tela o saldo do dia.
Se saldo for maior do que 2000:
Imprimir na tela o conteúdo da variável x1.
Imprimir na tela o conteúdo da variável x2.
Imprimir na tela o conteúdo da variável saldo.
Se saldo for menor do que -500:
Imprimir na tela o conteúdo da variável x1.
Imprimir na tela o conteúdo da variável x2.
Imprimir na tela o conteúdo da variável saldo.

Perguntar o valor recebido da terça.
Ler o valor recebido da terça em aux.
Somar aux com x1.
Perguntar o valor de saída da terça.
Ler o valor de saída da terça em aux.
Somar aux com x2.
Somar x1 com x2 e armazenar em saldo.
Imprimir na tela o saldo do dia.
Se saldo for maior do que 2000:
Imprimir na tela o conteúdo da variável x1.
Imprimir na tela o conteúdo da variável x2.
Imprimir na tela o conteúdo da variável saldo.
Se saldo for menor do que -500:
Imprimir na tela o conteúdo da variável x1.
Imprimir na tela o conteúdo da variável x2.
Imprimir na tela o conteúdo da variável saldo.

Perguntar o valor recebido da quarta.
Ler o valor recebido da quarta em aux.
Somar aux com x1.
Perguntar o valor de saída da quarta.
Ler o valor de saída da quarta em aux.
Somar aux com x2.
Somar x1 com x2 e armazenar em saldo.
Imprimir na tela o saldo do dia.
Se saldo for maior do que 2000:
Imprimir na tela o conteúdo da variável x1.
Imprimir na tela o conteúdo da variável x2.
Imprimir na tela o conteúdo da variável saldo.
Se saldo for menor do que -500:
Imprimir na tela o conteúdo da variável x1.
Imprimir na tela o conteúdo da variável x2.
Imprimir na tela o conteúdo da variável saldo.

Perguntar o valor recebido da quinta.
Ler o valor recebido da quinta em aux.
Somar aux com x1.
Perguntar o valor de saída da quinta.
Ler o valor de saída da quinta em aux.
Somar aux com x2.
Somar x1 com x2 e armazenar em saldo.
Imprimir na tela o saldo do dia.
Se saldo for maior do que 2000:
Imprimir na tela o conteúdo da variável x1.
Imprimir na tela o conteúdo da variável x2.
Imprimir na tela o conteúdo da variável saldo.
Se saldo for menor do que -500:
Imprimir na tela o conteúdo da variável x1.
Imprimir na tela o conteúdo da variável x2.
Imprimir na tela o conteúdo da variável saldo.

Perguntar o valor recebido da sexta.
Ler o valor recebido da sexta em aux.
Somar aux com x1.
Perguntar o valor de saída da sexta.
Ler o valor de saída da sexta em aux.
Somar aux com x2.
Somar x1 com x2 e armazenar em saldo.
Imprimir na tela o saldo do dia.
Se saldo for maior do que 2000:
Imprimir na tela o conteúdo da variável x1.
Imprimir na tela o conteúdo da variável x2.
Imprimir na tela o conteúdo da variável saldo.
Se saldo for menor do que -500:
Imprimir na tela o conteúdo da variável x1.
Imprimir na tela o conteúdo da variável x2.
Imprimir na tela o conteúdo da variável saldo.
*/

#include <stdio.h>

int main() {

 	float x1, x2, aux, saldo;
	x1=0;
 	x2=0;
 	saldo=0;
  	
  	printf("Informe o Valor recebido na Segunda-Feira: ");
  	scanf("%f", &aux);
  	x1 += aux;
  	printf("Informe o Valor pago na Segunda-Feira: ");
	scanf("%f", &aux);
	x2 +=aux;
	
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
  	
  	printf("Informe o Valor recebido na Terça-Feira: ");
  	scanf("%f", &aux);
  	x1 += aux;
  	printf("Informe o Valor pago na Terça-Feira: ");
	scanf("%f", &aux);
	x2 +=aux;
	
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
  	
  	printf("Informe o Valor recebido na Quarta-Feira: ");
  	scanf("%f", &aux);
  	x1 += aux;
  	printf("Informe o Valor pago na Quarta-Feira: ");
	scanf("%f", &aux);
	x2 +=aux;
	
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
  	
  	printf("Informe o Valor recebido na Quinta-Feira: ");
  	scanf("%f", &aux);
  	x1 += aux;
  	printf("Informe o Valor pago na Quinta-Feira: ");
	scanf("%f", &aux);
	x2 +=aux;
	
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
  	
  	printf("Informe o Valor recebido na Sexta-Feira: ");
  	scanf("%f", &aux);
  	x1 += aux;
  	printf("Informe o Valor pago na Sexta-Feira: ");
	scanf("%f", &aux);
	x2 +=aux;
	
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

    return 0;
}
