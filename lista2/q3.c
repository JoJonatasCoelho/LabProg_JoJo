#include <stdio.h>

// Escreva um programa que leia um n ́umero inteiro e positivo F e calcule o fatorial deste n ́umero.
void quest3(){
    unsigned int num;
    long long int fac = 1;
    puts("Digite o número para ser calculado o fatorial");
    scanf(" %u", &num);

    for (int i = num; i > 1; --i) {
        fac *= i;
        printf("%lld \n", fac);

    }
    printf("%lld\n", fac);
}
