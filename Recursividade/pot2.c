#include <stdio.h>
#include <stdbool.h>

/* 
   Retorna true se n for potência de 2.
   Pré-condição: n >= 0
*/
bool potencia2(int n) {
    if (n == 1)          // 2^0 = 1
        return true;
    if (n == 0 || n % 2 != 0)  // 0 ou ímpar (exceto 1) não são
        return false;
    return potencia2(n / 2);
}

int main() {
    int nums[] = {1, 2, 4, 8, 10, 16, 18, 5};
    for (int i = 0; i < 8; i++) {
        printf("%d %s potência de 2\n",
               nums[i],
               potencia2(nums[i]) ? "é" : "não é");
    }
    return 0;
}
