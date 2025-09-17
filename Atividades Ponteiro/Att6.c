/*6. [PONTEIRO COM STRUCT] Escreva um programa em C que define uma struct para representar um ponto cartesiano (x, y), leia dois pontos e calcule a dista ncia entre os pontos.
O ca lculo da dista ncia entre os dois pontos deve ser implementado como uma funça o.
Utilize um tipo de dado heteroge neo (struct) para representar o ponto cartesiano (ponto2D).
float distancia(struct Ponto2D *ponto1, struct Ponto2D *ponto2)*/

#include <stdio.h>
#include <math.h>

// Definição da struct
struct Ponto2D {
    float x;
    float y;
};

// Função que calcula a distância entre dois pontos
float distancia(struct Ponto2D *ponto1, struct Ponto2D *ponto2) {
    float dx = ponto2->x - ponto1->x;   // diferença em x
    float dy = ponto2->y - ponto1->y;   // diferença em y
    return sqrt(dx * dx + dy * dy);     // fórmula da distância
}

int main() {
    struct Ponto2D p1, p2;

    // Leitura dos pontos
    printf("Digite as coordenadas do primeiro ponto (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Digite as coordenadas do segundo ponto (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    // Cálculo da distância
    float d = distancia(&p1, &p2);

    // Exibição do resultado
    printf("A distancia entre os pontos é: %.2f\n", d);

    return 0;
}
