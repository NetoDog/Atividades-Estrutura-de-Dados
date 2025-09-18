#include <stdio.h>
#include <stdbool.h>

/*--------------------------------------------------
8) Multiplicação Russa (definição recursiva)
   russa(a,b):
   - Se a == 1 -> retorna b
   - Se a > 1 e a é par -> russa(a/2, b*2)
   - Se a > 1 e a é ímpar -> b + russa(a/2, b*2)
--------------------------------------------------*/
int russa(int a, int b) {
    if (a == 1) return b;
    if (a % 2 == 0)
        return russa(a / 2, b * 2);
    else
        return b + russa(a / 2, b * 2);
}

/*--------------------------------------------------
9) Função recursiva para verificar se um número é primo
   isPrimo(n, d):
   - d é o divisor atual que está sendo testado
--------------------------------------------------*/
bool isPrimoRec(int n, int d) {
    if (n < 2) return false;          // 0 e 1 não são primos
    if (d * d > n) return true;       // nenhum divisor encontrado
    if (n % d == 0) return false;     // divisor encontrado
    return isPrimoRec(n, d + 1);
}

// Função de conveniência
bool isPrimo(int n) {
    return isPrimoRec(n, 2);
}

/*--------------------------------------------------
   Programa de teste
--------------------------------------------------*/
int main() {
    // Exercício 8
    int a = 27, b = 82;
    printf("Multiplicação Russa: %d * %d = %d\n", a, b, russa(a, b));

    // Exercício 9
    int num = 29;
    if (isPrimo(num))
        printf("%d é primo.\n", num);
    else
        printf("%d não é primo.\n", num);

    return 0;
}



