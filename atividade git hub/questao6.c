#include <stdio.h>
#include <stdlib.h>
//questao 8

int main(){
    flot numeros [5];
    float postivios = 0;
    int i = 0;
    int negativos = 0;

    printf("Insira 5 valores no vetor: \n");
    for (i = 0; i <5; i++){
        scanf("%f", &numeros[i]);
    }

    for (i=0 i < 5; i++){
        if (numeros [i] <0){
            negativos ++;
        } else {
            postivios ++;
        }
    }

    printf("Negativos: %d\n", negativos);
    printf("Positivos: %.2f \n")
}