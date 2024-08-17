#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;


typedef struct {
    Ponto sup_esq;
    Ponto inf_dir;
} Retangulo;


float calcularArea(Retangulo r) {
    float largura = fabs(r.inf_dir.x - r.sup_esq.x);
    float altura = fabs(r.sup_esq.y - r.inf_dir.y);
    return largura * altura;
}


float calcularDiagonal(Retangulo r) {
    float largura = r.inf_dir.x - r.sup_esq.x;
    float altura = r.sup_esq.y - r.inf_dir.y;
    return sqrt(largura * largura + altura * altura);
}

float calcularPerimetro(Retangulo r) {
    float largura = fabs(r.inf_dir.x - r.sup_esq.x);
    float altura = fabs(r.sup_esq.y - r.inf_dir.y);
    return 2 * (largura + altura);
}

int main() {
    Retangulo r;

  
    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &r.sup_esq.x, &r.sup_esq.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &r.inf_dir.x, &r.inf_dir.y);

    float area = calcularArea(r);
    float diagonal = calcularDiagonal(r);
    float perimetro = calcularPerimetro(r);

    printf("Área do retângulo: %.2f\n", area);
    printf("Comprimento da diagonal: %.2f\n", diagonal);
    printf("Perímetro do retângulo: %.2f\n", perimetro);

    return 0;
}
