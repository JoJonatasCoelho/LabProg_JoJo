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

    unsigned long tamanho_s1 = strlen(string);
    unsigned long tamanho_s2 = strlen(string2);
    unsigned long ch = 0;
    for(ch = tamanho_s1; ch <= tamanho_s1 + tamanho_s2; ch++ ){
        string[ch] = string2[ch - tamanho_s1];
    }
    string[ch + 1] = '\0';

    printf("\nConcatenado: %s", string);

    return 0;
}
