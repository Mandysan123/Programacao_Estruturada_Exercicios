#include <stdio.h>

int somaCubos(int n) {
	if (n == 1) {
    	return 1;
	}
	
	return n * n * n + somaCubos(n - 1);
}

int main() {
	int n;

	printf("Digite o valor de n: ");
	scanf("%d", &n);

	if (n < 1) {
    	printf("O valor de n deve ser um número inteiro positivo.\n");
    	return 1;
	}

	int resultado = somaCubos(n);
	printf("A soma dos primeiros %d cubos é: %d\n", n, resultado);

	return 0;
}

