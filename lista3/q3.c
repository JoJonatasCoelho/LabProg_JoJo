#include <stdio.h>
#define TAM 80

int main(int argc, char *argv[])
{
    char string[TAM];

    puts("Digite uma string:");
    fgets(string, TAM, stdin);

    unsigned long qtdChar = 0;
    unsigned long count = 0;
    while(string[count++] != '\0')
        qtdChar++;

    printf("A quantidade de caracteres e de: %lu\n", qtdChar-1);

}
