#include <stdio.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[100];
    Data nascimento;
} Pessoa;

int calcularIdade(Data nascimento) {

    int anoAtual = 2024;
    int mesAtual = 8;
    int diaAtual = 17;

    int idade = anoAtual - nascimento.ano;
    if (nascimento.mes > mesAtual || (nascimento.mes == mesAtual && nascimento.dia > diaAtual)) {
        idade--;
    }
    return idade;
}

int main() {
    Pessoa pessoas[6];
    Pessoa maisNova, maisVelha;
    int idadeAtual, idadeMaisNova = 0, idadeMaisVelha = 200; 

  
    for (int i = 0; i < 6; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, 100, stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0'; 

        printf("Digite a data de nascimento da pessoa %d (dia mes ano): ", i + 1);
        scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);
        getchar(); 
    }

  
    maisNova = pessoas[0];
    maisVelha = pessoas[0];

 
    for (int i = 0; i < 6; i++) {
        idadeAtual = calcularIdade(pessoas[i].nascimento);
        
        if (idadeAtual < idadeMaisNova) {
            idadeMaisNova = idadeAtual;
            maisNova = pessoas[i];
        }

        if (idadeAtual > idadeMaisVelha) {
            idadeMaisVelha = idadeAtual;
            maisVelha = pessoas[i];
        }
    }

   
    printf("\nPessoa mais nova: %s (Data de nascimento: %02d/%02d/%d)\n", maisNova.nome, maisNova.nascimento.dia, maisNova.nascimento.mes, maisNova.nascimento.ano);
    printf("Pessoa mais velha: %s (Data de nascimento: %02d/%02d/%d)\n", maisVelha.nome, maisVelha.nascimento.dia, maisVelha.nascimento.mes, maisVelha.nascimento.ano);

    return 0;
}
