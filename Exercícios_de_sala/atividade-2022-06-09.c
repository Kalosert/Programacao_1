#include <stdio.h>

int main(){

	char caract;
	
	scanf("%c", &caract);
	
	switch(caract){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Esse caractere é uma vogal\n");
			break;
		default:
			printf("Esse caractere é uma consoante\n");
	}

}
