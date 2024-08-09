#include <stdio.h>
#include <stdlib.h>
//questao 7
int main () {
	int X [10], menor, maior;
	printf(“Digite um numero: ”);
	scanf(“%d”, &menor);

	for (int i =0; i< 10; i ++){
		scanf(“%d”, &X[i]);
		if (X [i] > maior){
		maior = X [i];
    }
		else if (X[i] < menor ){
		menor = [i];
    }   

}
    printf(“Maior numero é %d”, maior);
    printf(”Menor numero é %d”, menor);

}
