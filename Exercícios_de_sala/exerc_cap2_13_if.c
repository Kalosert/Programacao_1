#include <stdio.h>

int main(){

    float notap1, notap2, media;
    char nome[40];

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &notap1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &notap2);

    media = (notap1 + notap2)/2;

    if(media >= 7){
        printf("Nome do aluno: %s\n", nome);
        printf("Nota da primeira prova: %.1f\n", notap1);
        printf("Nota da segunda prova: %.1f\n", notap2);
        printf("Média das provas: %.2f\n", media);
        printf("Aprovado");
    }
    else if(media <= 3){
        printf("Nome do aluno: %s\n", nome);
        printf("Nota da primeira prova: %.1f\n", notap1);
        printf("Nota da segunda prova: %.1f\n", notap2);
        printf("Média das provas: %.2f\n", media);
        printf("Reprovado");
    }
    else{
        printf("Nome do aluno: %s\n", nome);
        printf("Nota da primeira prova: %.1f\n", notap1);
        printf("Nota da segunda prova: %.1f\n", notap2);
        printf("Média das provas: %.2f\n", media);
        printf("Em Prova Final");
    }

    return 0;
}