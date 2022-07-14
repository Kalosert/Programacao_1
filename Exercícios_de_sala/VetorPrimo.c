#include <stdio.h>
#include <stdlib.h>

#define TAM 50

int main(){

	int i, j;
	int num[TAM], primo, aux[TAM];

	for(i = 0; i < TAM; i++){
		num[i] = rand() % 100;
		printf("%d\t", num[i]);
	}
	
	printf("\n\nNúmeros Primos: \n\n");
	
	for(i = 0; i < TAM; i++){
		primo = 0;
		for(j = 2; j < num[i] - 1; j++){
			if(num[i] % j == 0){
				primo=1;
			}
		}
		if (primo == 0){
			printf("%d\t", num[i]);
		}
	}
	
	printf("\n\n");
	
	for(i = 0; i < TAM; i += 2){
		aux[i] = num[i] + num[i+1];
		printf("%d + %d = %d\n", num[i], num[i+1], aux[i]); 
	}
				
}	
