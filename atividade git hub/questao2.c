
#include <stdio.h>
#include <stdlib.h>
//questao 4
int main (){
	int A [6] = {1,0,5,-2,-5,7};
	int soma;
	soma = A [0] + A [1] + A [5];
	printf(“A soma dos valores é %d”, soma);

	A [4] = 100;
	for (int i = 0; i<6; i++){
	printf(“%d”, A [i]);
    }

}
