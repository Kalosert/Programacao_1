#include <stdio.h>

int main(){

    int notap1, notap2, media;
    char nome[40];

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite a nota da primeira prova: ");
    scanf("%d", &notap1);
    printf("Digite a nota da segunda prova: ");
    scanf("%d", &notap2);

    media = (notap1 + notap2)/2;

    switch(media){
        case 10:
        case 9:
        case 8:
        case 7:
            printf("Nome do aluno: %s\n", nome);
            printf("Nota da primeira prova: %d\n", notap1);
            printf("Nota da segunda prova: %d\n", notap2);
            printf("Média das provas: %d\n", media);
            printf("Aprovado");
            break;
        case 6:
        case 5:
        case 4:
            printf("Nome do aluno: %s\n", nome);
            printf("Nota da primeira prova: %d\n", notap1);
            printf("Nota da segunda prova: %d\n", notap2);
            printf("Média das provas: %d\n", media);
            printf("Em Prova Final");
            break;
        default:
            printf("Nome do aluno: %s\n", nome);
            printf("Nota da primeira prova: %d\n", notap1);
            printf("Nota da segunda prova: %d\n", notap2);
            printf("Média das provas: %d\n", media);
            printf("Reprovado");
    }

    return 0;
}