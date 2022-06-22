#include <stdio.h>

int main(){

    int i;
    float sala, aux;
    char nome[40];

    for(i=0; i <= 5; i++){
        printf("Informe o seu nome: ");
        scanf("%s", nome);
        printf("Informe o valor do seu salário: R$");
        scanf("%f", &sala);

        if(sala < 1300){
            printf("Insento");
        }
        else if(sala >= 1300 && sala < 2300){
            aux = sala * 0.1;
            printf("Aliquota: %.2f\n", aux);
        }
        else{
            aux = sala * 0.15;
            printf("Aliquota: %.2f\n", aux);
        }
    }

    return 0;
}