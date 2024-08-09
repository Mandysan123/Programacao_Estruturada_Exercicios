#include <stdio.h>
#include <stdlib.h>
//questao 6
int main (){
	int vetor [10], somaPares = 0;
	for (int i =0; i <10){
	scanf (“%d”, &vetor[i]);
	if (vetor [i] %2 == 0){
	somaPares ++ 1;
    
    }
	printf(“Tem %d números pares”, somaPares);
}
}