#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int matricula;     	
	char nome[50];     	
	float notas[3];    	
} Aluno;

int main() {
	
	Aluno *alunoPtr = (Aluno *)malloc(sizeof(Aluno));

	
	if (alunoPtr == NULL) {
    	printf("Erro na alocação de memória.\n");
    	return 1; 
	}

	
	printf("Tamanho da estrutura Aluno em bytes: %zu\n", sizeof(Aluno));

	
	free(alunoPtr);

	return 0; 
}
