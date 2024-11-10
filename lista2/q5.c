#include <stdio.h>
// Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.
// A condi ̧c ̃ao de termino do programa  ́e quando o usu ́ario digitar zero.

void quest5(){
    int n;
    int menor = 0, maior = 0;


    do {
    puts("Digite um numero para ler");
    scanf("%d", &n);

    (n < menor)? menor = n : menor = menor;
    (n > maior)? maior = n : maior = maior;

    printf("O maior era: %d \nE o menor: %d\n", maior, menor);
    } while (n != 0);

}
