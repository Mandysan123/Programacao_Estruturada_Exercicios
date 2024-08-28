#include <stdio.h>

int main() {
    int array[5];
    int *ptr = array;  

   
    printf("Digite 5 inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", (ptr + i));  


    printf("\nDobro dos valores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Dobro do valor %d: %d\n", i + 1, 2 * *(ptr + i));  
    }

    return 0;
}
}