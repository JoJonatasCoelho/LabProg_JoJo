// Elabore um programa que apresente os quadrados dos n ́umeros inteiros m ́ultiplos de 4 existentes na
// faixa de valores de 15 a 90.

#include <stdio.h>
int main(void)
{
    for(short int i = 15; i <= 90; i++){
        //printf("do bagulho %d %d", i, i/4);
        (i % 4)? puts("") : printf("o número %d é o quadrado\n", i*i);
    }
    return 0;
}
