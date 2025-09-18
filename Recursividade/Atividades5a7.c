#include <stdio.h>
#include "C:\Users\Windows 10 pro\Documents\GitHub\Atividades-Estrutura-de-Dados\Ulilidades\Utils.h"   // só se você quiser usar utilitários de int/Data
#include <math.h>

#include <stdio.h>

#include <stdio.h>
#include <stdbool.h>

/*--------------------------------------------------
   Função auxiliar: verifica se n é primo
--------------------------------------------------*/
bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

/*--------------------------------------------------
   Função que retorna o próximo primo após p
--------------------------------------------------*/
int proxPrimo(int p) {
    int n = p + 1;
    while (!ehPrimo(n)) n++;
    return n;
}

/*--------------------------------------------------
5) MMC de a e b pelo método dos fatores primos
   mmc(a,b,p): p é o primo atual
--------------------------------------------------*/
int mmc(int a, int b, int p) {
    if (a == 1 && b == 1) return 1;
    if (a % p == 0 && b % p == 0)
        return p * mmc(a / p, b / p, p);
    else if (a % p == 0)
        return p * mmc(a / p, b, p);
    else if (b % p == 0)
        return p * mmc(a, b / p, p);
    else
        return mmc(a, b, proxPrimo(p));
}

/*--------------------------------------------------
6) Percurso da bola
   h = altura inicial
   r = coeficiente de amortecimento (0<r<1)
--------------------------------------------------*/
double perc(double h, double r) {
    if (h == 0) return 0.0;
    double h2 = h * r;
    if (h2 < 1e-9) // altura praticamente zero
        return h; // só a descida final
    return h + (h * r) + perc(h2, r);
}

/*--------------------------------------------------
7) Sequência de Hailstone
   Retorna o comprimento da sequência até chegar a 1
--------------------------------------------------*/
int hailstone(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0)
        return 1 + hailstone(n / 2);
    else
        return 1 + hailstone(3 * n + 1);
}

/*--------------------------------------------------
   Programa de teste
--------------------------------------------------*/
int main() {
    // Exercício 5
    int a = 12, b = 18;
    printf("MMC(%d,%d) = %d\n", a, b, mmc(a, b, 2));

    // Exercício 6
    double h = 10.0, r = 0.5;
    printf("Distância total percorrida pela bola: %.2f\n", perc(h, r));

    // Exercício 7
    int n = 7;
    printf("Comprimento da sequência de Hailstone para %d: %d\n", n, hailstone(n));

    return 0;
}
