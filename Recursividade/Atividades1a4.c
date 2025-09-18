#include <stdio.h>
#include "C:\Users\Windows 10 pro\Documents\GitHub\Atividades-Estrutura-de-Dados\Ulilidades\Utils.h"   // só se você quiser usar utilitários de int/Data
#include <math.h>

#include <stdio.h>

/*------------------------------
  Funções de apoio: sucessor e antecessor
------------------------------*/
int sucessor(int x) {
    return x + 1;
}
int antecessor(int x) {
    return x - 1;
}

/*------------------------------
  1) Soma recursiva usando apenas sucessor e antecessor
------------------------------*/
int soma(int x, int y) {
    if (y == 0) return x;
    return soma(sucessor(x), antecessor(y));
}

/*------------------------------
  2) Multiplicação recursiva via somas sucessivas
------------------------------*/
int mult(int a, int b) {
    if (b == 0) return 0;
    return a + mult(a, b - 1);
}

/*------------------------------
  3) Ocorrências do dígito k em n
------------------------------*/
int ocorr(int k, int n) {
    if (n == 0) {
        return (k == 0) ? 1 : 0;   // conta se k também é zero
    }
    if (n % 10 == k)
        return 1 + ocorr(k, n / 10);
    else
        return ocorr(k, n / 10);
}

/*------------------------------
  4) MDC pelo algoritmo de Euclides
------------------------------*/
int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

/*------------------------------
  Função principal para teste
------------------------------*/
int main() {
    printf("soma(5, 3) = %d\n", soma(5, 3));        // 8
    printf("mult(4, 6) = %d\n", mult(4, 6));        // 24
    printf("ocorr(2, 2022) = %d\n", ocorr(2, 2022));// 3
    printf("mdc(48, 18) = %d\n", mdc(48, 18));      // 6
    return 0;
}
