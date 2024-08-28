
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *charPtr = (char *)malloc(sizeof(char));
	int *intPtr = (int *)malloc(sizeof(int));
	float *floatPtr = (float *)malloc(sizeof(float));
	double *doublePtr = (double *)malloc(sizeof(double));

	if (charPtr == NULL || intPtr == NULL || floatPtr == NULL || doublePtr == NULL) {
    	printf("Erro na alocação de memória.\n");
    	return 1; 

	printf("Tamanho de char em bytes: %zu\n", sizeof(*charPtr));
	printf("Tamanho de int em bytes: %zu\n", sizeof(*intPtr));
	printf("Tamanho de float em bytes: %zu\n", sizeof(*floatPtr));
	printf("Tamanho de double em bytes: %zu\n", sizeof(*doublePtr));

	free(charPtr);
	free(intPtr);
	free(floatPtr);
	free(doublePtr);

	return 0;
}
}