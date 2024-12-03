#include <stdio.h>
#define TAM 80

int main(int argc, char *argv[])
{
    char string[TAM];
    char letra;

    puts("Digite uma string:");
    fgets(string, TAM, stdin);

    puts("Digite uma letra:");
    scanf(" %c", &letra);

    puts("\nBuscando...\n");
    for (int i = 0; i < TAM; ++i) {
        if (string[i] == letra){
            printf("caractere %c encontrado em \n%s\n com sucesso!\n", letra, string);
            return 0;
        }
        else
            puts("Buscando...");
    }

    puts("caractere nao encontrado em:");
    printf("%s\n", string);

    return 0;
}
