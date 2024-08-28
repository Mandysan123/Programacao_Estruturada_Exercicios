#include <stdio.h>

int main() {
    int a, b;
    int *ptrA = &a;
    int *ptrB = &b;

  
    printf("Digite o valor para a: ");
    scanf("%d", &a);
    printf("Digite o valor para b: ");
    scanf("%d", &b);

   
    if (ptrA > ptrB) {
        printf("O maior endereço é de 'a' e o seu conteúdo é: %d\n", *ptrA);
    } else {
        printf("O maior endereço é de 'b' e o seu conteúdo é: %d\n", *ptrB);
    }

    return 0;
}
