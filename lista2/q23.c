#include <stdio.h>

int main() {
    int a = 5, b = 5;
    int resultadoPre, resultadoPos;

    resultadoPre = --a;
    puts("Após pré-decremento (--a):\n");
    printf("Valor de a: %d\n", a);
    printf("Resultado de pré-decremento: %d\n\n", resultadoPre);

    resultadoPos = b--;
    puts("Após pós-decremento (b--):\n");
    printf("Valor de b: %d\n", b);
    printf("Resultado de pós-decremento: %d\n", resultadoPos);

    return 0;
}
