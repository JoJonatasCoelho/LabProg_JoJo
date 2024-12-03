#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define MAX 19

int main(int argc, char *argv[])
{

    int V[TAM];
    srand(time(NULL));

    for (int i = 0; i < TAM; ++i) {
        V[i] = rand() % MAX;
    }

    int soma = 0;
    int produto = 1;
    for (int i = 0; i < TAM; ++i) {
        soma += V[i];
        produto *= V[i];
        printf("%d \n", V[i]);
    }

    printf("A media aritimetica e: %d\n", soma/TAM);
    printf("A media geometrica e de: %0.2f\n", pow(produto, 1.0/TAM));



    return 0;
}
