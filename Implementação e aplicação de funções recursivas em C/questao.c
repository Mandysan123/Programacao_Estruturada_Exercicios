#include <stdio.h>

int fatorial(int n) {
    if (n == 0) 
        return 1;
    return n * fatorial(n - 1); 
}

int fibonacci(int n) {
    if (n == 0) 
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int mdc(int a, int b) {
    if (b == 0) 
        return a;
    return mdc(b, a % b); 
}

int main() {
    int escolha, n, a, b;

    printf("Escolha uma opção:\n");
    printf("1. Calcular o fatorial de um número\n");
    printf("2. Calcular o N-ésimo termo da sequência de Fibonacci\n");
    printf("3. Calcular o máximo divisor comum (MDC) de dois números\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Digite um número para calcular o fatorial: ");
            scanf("%d", &n);
            printf("Fatorial de %d é: %d\n", n, fatorial(n));
            break;
        case 2:
            printf("Digite o valor de N para calcular o N-ésimo termo da sequência de Fibonacci: ");
            scanf("%d", &n);
            printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));
            break;
        case 3:
            printf("Digite dois números para calcular o MDC: ");
            scanf("%d %d", &a, &b);
            printf("O MDC de %d e %d é: %d\n", a, b, mdc(a, b));
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
