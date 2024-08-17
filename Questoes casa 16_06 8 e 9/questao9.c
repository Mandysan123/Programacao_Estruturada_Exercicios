#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char esporte[50];
    int idade;
    float altura;
} Atleta;

int main() {
    Atleta atletas[5];
    Atleta maisAlto, maisVelho;
    int idadeMaisVelho = 0;
    float alturaMaisAlto = 0.0;

   
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do atleta %d: ", i + 1);
        fgets(atletas[i].nome, 100, stdin);
        atletas[i].nome[strcspn(atletas[i].nome, "\n")] = '\0'; 

        printf("Digite o esporte do atleta %d: ", i + 1);
        fgets(atletas[i].esporte, 50, stdin);
        atletas[i].esporte[strcspn(atletas[i].esporte, "\n")] = '\0';

        printf("Digite a idade do atleta %d: ", i + 1);
        scanf("%d", &atletas[i].idade);

        printf("Digite a altura do atleta %d (em metros): ", i + 1);
        scanf("%f", &atletas[i].altura);
        getchar(); 
    }

   
    maisAlto = atletas[0];
    maisVelho = atletas[0];
    alturaMaisAlto = atletas[0].altura;
    idadeMaisVelho = atletas[0].idade;

    
    for (int i = 0; i < 5; i++) {
        if (atletas[i].altura > alturaMaisAlto) {
            alturaMaisAlto = atletas[i].altura;
            maisAlto = atletas[i];
        }

        if (atletas[i].idade > idadeMaisVelho) {
            idadeMaisVelho = atletas[i].idade;
            maisVelho = atletas[i];
        }
    }


    printf("\nAtleta mais alto: %s (Altura: %.2f metros)\n", maisAlto.nome, maisAlto.altura);
    printf("Atleta mais velho: %s (Idade: %d anos)\n", maisVelho.nome, maisVelho.idade);

    return 0;
}
