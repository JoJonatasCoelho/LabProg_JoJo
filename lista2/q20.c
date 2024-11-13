#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    printf("Fatoriais dos números ímpares entre 1 e 10:\n");

    for (int i = 1; i <= 10; i += 2) {
        printf("%d! = %llu\n", i, fatorial(i));
    }

    return 0;
}
