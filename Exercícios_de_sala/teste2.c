#include <stdio.h>

int main() {

	int i;
 	float x1, x2, saldo, salpos;
 	float salneg, torece, pagreal;
 	float salsem = 0;

  	for (i = 0; i < 3; i++) {
   		scanf("%f", &x1);
		scanf("%f", &x2);
    
   		saldo= x1 - x2;
    
    	printf("O saldo do dia %d e : %.2f\n", i, saldo);
    		
    	salsem= salsem + (saldo);
    	salpos= salpos + x1;
    	salneg= salneg + (x2);
    	torece= torece + x1;
    	pagreal= pagreal + (x2);
  	}
  
  	if(salsem > 2000){
  	    printf("Valor total de dinheiro recebido: %.2f\n", torece);
  		printf("Valor total de pagamentos realizados: %.2f\n", pagreal);
  		printf("Saldo positivo atual: %.2f\n", salpos);
  	}
  	else if(salsem < -500){
  	    printf("Valor total de dinheiro recebido: %.2f\n", torece);
  		printf("Valor total de pagamentos realizados: %.2f\n", pagreal);
  		printf("Saldo negativo atual: %.2f\n", salneg);
  	}
}
