#include <stdio.h>
#include <stdlib.h>


int main() {
	int *vetor;   
	int tamanho;  

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);

	if (tamanho <= 0) {
    	printf("Tamanho inválido. O tamanho deve ser um número positivo.\n");
    	return 1; 
	}

	vetor = (int *)malloc(tamanho * sizeof(int));

	if (vetor == NULL) {
    	printf("Erro na alocação de memória.\n");
    	return 1; 
	}

	printf("Digite os valores do vetor:\n");
	for (int i = 0; i < tamanho; i++) {
    	printf("Elemento %d: ", i + 1);
    	scanf("%d", &vetor[i]);
	}

	printf("Valores do vetor:\n");
	for (int i = 0; i < tamanho; i++) {
    	printf("Elemento %d: %d\n", i + 1, vetor[i]);
	}
	free(vetor);
	return 0; 
}

