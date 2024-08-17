#include <stdio.h>


typedef struct {
    int matricula;
    char nome[50];
    float notas[3];
} Aluno;

float calcularMedia(Aluno a) {
    return (a.notas[0] + a.notas[1] + a.notas[2]) / 3;
}

int main() {
    Aluno alunos[5];
    int i, aluno_maior_media = 0;
    float maior_media = 0.0;


    for (i = 0; i < 5; i++) {
        printf("Digite o número de matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite as três notas do aluno %d: ", i + 1);
        scanf("%f %f %f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2]);
        
      
        float media_atual = calcularMedia(alunos[i]);

    
        if (media_atual > maior_media) {
            maior_media = media_atual;
            aluno_maior_media = i;
        }
    }


    printf("\nAluno com a maior média geral:\n");
    printf("Nome: %s\n", alunos[aluno_maior_media].nome);
    printf("Matrícula: %d\n", alunos[aluno_maior_media].matricula);
    printf("Notas: %.2f, %.2f, %.2f\n", alunos[aluno_maior_media].notas[0], alunos[aluno_maior_media].notas[1], alunos[aluno_maior_media].notas[2]);
    printf("Média: %.2f\n", maior_media);

    return 0;
}
