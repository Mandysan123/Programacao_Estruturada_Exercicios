#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para buscar um valor no vetor
int buscaLinear(int *arr, int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == valor)
            return i; // Retorna o índice se o valor for encontrado
    }
    return -1; // Retorna -1 se o valor não for encontrado
}

// Função para inserir um valor no final do vetor
int* inserirFinal(int *arr, int n, int valor) {
    arr = realloc(arr, (n + 1) * sizeof(int)); // Redimensiona o vetor
    if (arr == NULL) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }
    arr[n] = valor; // Adiciona o novo valor no final
    return arr;
}

// Função para inserir um valor em uma posição específica
int* inserirPosicao(int *arr, int n, int pos, int valor) {
    arr = realloc(arr, (n + 1) * sizeof(int)); // Redimensiona o vetor
    if (arr == NULL) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }
    // Move os elementos após a posição para a direita
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = valor; // Insere o novo valor na posição especificada
    return arr;
}

// Função para remover um valor de uma posição específica
int* removerPosicao(int *arr, int n, int pos) {
    // Move os elementos após a posição para a esquerda
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr = realloc(arr, (n - 1) * sizeof(int)); // Redimensiona o vetor
    if (arr == NULL && n > 1) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }
    return arr;
}

int main() {
    int n = 5;
    int *arr = malloc(n * sizeof(int));

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o array dinâmico com valores aleatórios
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 101; // Números aleatórios entre 0 e 100
    }

    // Exibe o vetor inicial
    printf("Vetor inicial: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int opcao, valor, pos;

    while (1) {
        printf("\nMenu de Operações:\n");
        printf("1. Buscar um valor\n");
        printf("2. Inserir no final\n");
        printf("3. Inserir em uma posição\n");
        printf("4. Remover de uma posição\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser buscado: ");
                scanf("%d", &valor);
                int indice = buscaLinear(arr, n, valor);
                if (indice != -1)
                    printf("Valor encontrado no índice %d\n", indice);
                else
                    printf("Valor não encontrado\n");
                break;

            case 2:
                printf("Digite o valor a ser inserido no final: ");
                scanf("%d", &valor);
                arr = inserirFinal(arr, n, valor);
                n++;
                break;

            case 3:
                printf("Digite a posição para inserir: ");
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Posição inválida!\n");
                } else {
                    printf("Digite o valor a ser inserido: ");
                    scanf("%d", &valor);
                    arr = inserirPosicao(arr, n, pos, valor);
                    n++;
                }
                break;

            case 4:
                printf("Digite a posição para remover: ");
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Posição inválida!\n");
                } else {
                    arr = removerPosicao(arr, n, pos);
                    n--;
                }
                break;

            case 5:
                free(arr);
                exit(0);

            default:
                printf("Opção inválida!\n");
        }

        // Exibe o vetor após cada operação
        printf("Vetor atual: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
