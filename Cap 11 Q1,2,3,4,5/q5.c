#include <stdio.h>
#include <stdlib.h>

int main() {
	int *vetor;
	int N;     	
	int valido;	

	
	valido = 0;
	for (;;) {
    	printf("Digite o valor inteiro N (não negativo): ");
    	scanf("%d", &N);

    	if (N >= 0) {
        	valido = 1;  
        	break;   
    	} else {
        	printf("O valor deve ser não negativo. Tente novamente.\n");
    	}
	}


	vetor = (int *)malloc(N * sizeof(int));

	if (vetor == NULL) {
    	printf("Erro na alocação de memória.\n");
    	return 1;
	}

	for (int i = 0; i < N; i++) {
    	valido = 0;
    	for (;;) {
        	printf("Digite o valor para a posição %d (deve ser >= 2): ", i);
        	scanf("%d", &vetor[i]);

        	if (vetor[i] >= 2) {
            	valido = 1;  
            	break;   
        	} else {
            	printf("O valor deve ser maior ou igual a 2. Tente novamente.\n");
        	}
    	}
	}

	printf("Valores do vetor:\n");
	for (int i = 0; i < N; i++) {
    	printf("Posição %d: %d\n", i, vetor[i]);
	}

	free(vetor);

	return 0; 
}
