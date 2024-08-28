#include <stdio.h>

int main() {
    int a, b;
    int *ptrA = &a;
    int *ptrB = &b;

    if (ptrA > ptrB) {
        printf("O maior endereço é: %d\n", (int)ptrA);
    } else {
        printf("O maior endereço é: %d\n", (int)ptrB);
    }

    return 0;
}
