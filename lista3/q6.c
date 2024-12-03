	#include <stdio.h>
#include <string.h>
#define TAM 80

int main(int argc, char *argv[])
{
    char string[TAM];
    //   char inversa[TAM];

    puts("Digite uma string:");
    fgets(string, TAM, stdin);

    for (int i = strlen(string)-1; i >= 0; i--) {
        printf("i: %d |  charactere: %c \n", i,string[i]);
    }
    printf("%lu\n", strlen(string));
    return 0;
}
