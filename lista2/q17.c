// Elaborar um programa que apresente os valores de convers ̃ao de graus Celsius em graus Fahrenheit,
// de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
// programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a f ́ormula de convers ̃ao.

#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    printf("Celsius\tFahrenheit\n");
    printf("---------------------\n");

    for (celsius = 10; celsius <= 100; celsius += 10) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
