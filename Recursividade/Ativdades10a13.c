#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/*--------------------------------------------------
10) Função recursiva que inverte um número inteiro
--------------------------------------------------*/
int inverterAux(int n, int resultado) {
    if (n == 0) return resultado;
    return inverterAux(n / 10, resultado * 10 + n % 10);
}

int inverter(int n) {
    return inverterAux(n, 0);
}

/*--------------------------------------------------
11) Função recursiva que verifica se um número é palíndromo
--------------------------------------------------*/
bool palindromoAux(int n, int invertido) {
    if (n == 0) return invertido;
    return palindromoAux(n / 10, invertido * 10 + n % 10);
}

bool palindromo(int n) {
    return n == palindromoAux(n, 0);
}

/*--------------------------------------------------
12) Multiplicação egípcia (baseada em dobrar e somar)
   Similar à multiplicação russa
--------------------------------------------------*/
int egipcia(int a, int b) {
    if (a == 0) return 0;
    if (a % 2 == 0)
        return egipcia(a / 2, b * 2);
    else
        return b + egipcia(a / 2, b * 2);
}

/*--------------------------------------------------
13) Verifica se um número é Armstrong
   (soma dos cubos dos dígitos igual ao próprio número)
--------------------------------------------------*/
int somaCubos(int n) {
    if (n == 0) return 0;
    int dig = n % 10;
    return dig * dig * dig + somaCubos(n / 10);
}

bool armstrong(int n) {
    return n == somaCubos(n);
}

/*--------------------------------------------------
   Programa de teste
--------------------------------------------------*/
int main() {
    // Exercício 10
    int num = 625;
    printf("Inverter %d -> %d\n", num, inverter(num));

    // Exercício 11
    int pnum = 53235;
    printf("%d é palíndromo? %s\n", pnum, palindromo(pnum) ? "Sim" : "Não");

    // Exercício 12
    int a = 27, b = 82;
    printf("Multiplicação egípcia: %d * %d = %d\n", a, b, egipcia(a, b));

    // Exercício 13
    int arm = 371;
    printf("%d é Armstrong? %s\n", arm, armstrong(arm) ? "Sim" : "Não");

    return 0;
}
