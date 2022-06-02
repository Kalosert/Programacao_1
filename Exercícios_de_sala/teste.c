#include <stdio.h>

int main() {

	int i;
 	float x1, x2, saldo, salsem;
 	float vtrece, pagreal;

  	for (i = 0; i < 3; i++) {
   		scanf("%f", &x1);
		scanf("%f", &x2);
    
   		saldo= x1 - x2;
    
    		printf("O saldo do dia %d e : %.2f\n", i, saldo);
    		
    		salsem= salsem + saldo;
    		vtrece= vtrece + x1;
    		pagreal= x2 + pagreal;
    		
    		//printf("%.2f\n", aux);
  	}
  
  	if(salsem > 2000){
  		printf("Valor total de dinheiro recebido: %.2f\n", vtrece);
  		printf("Valor total de pagamentos realizados: %.2f\n", pagreal);
  		printf("Qual é o saldo positivo atual: %.2f\n", salsem);
  	}
  
 	return 0;
}
