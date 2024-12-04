	#include <stdio.h>
#include <string.h>
#define TAM 80

int main(int argc, char *argv[])
{
    char string[TAM];
    char string2[TAM];

    puts("Digite uma string:");
    fgets(string, TAM, stdin);

    puts("Digite outra string:");
    fgets(string2, TAM, stdin);

    unsigned long len1 = strlen(string);
    unsigned long len2 = strlen(string2);

    if (len1 != len2) {
        puts("Não eram iguais.");
        return 0;
    }

    for(unsigned ch = 0; ch <= len1 ; ch++ ){
        if (string[ch] != string2[ch]) {
            puts("Não eram iguais.");
            return 0;
        }
    }

    puts("sao iguais");

    return 0;
}
