#include <stdio.h>
#include <stdlib.h>
#include <string.h>




typedef struct {
	char nome[100];
	int idade;
	char endereco[200];
} pessoa;


int main() {
	pessoa p;


	printf("Digite o nome: ");
	fgets(p.nome, 100, stdin);  


	printf("Digite a idade: ");
	scanf("%d", &p.idade);
	getchar();


	printf("Digite o endereco: ");
	fgets(p.endereco, 200, stdin);  


	printf("\nDados da pessoa:\n");
	printf("Nome: %s\n", p.nome);
	printf("Idade: %d\n", p.idade);
	printf("Endereco: %s\n", p.endereco);


	return 0;
}
