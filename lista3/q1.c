#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define COL 5
#define MAX 100
#define DIV 3

int main(int argc, char *argv[])
{
    float M[TAM][COL];

    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < COL; j++){
            M[i][j] = (float)(rand() % MAX) / DIV;
        }
    }

    float menor = M[0][0];
    float maior = M[0][0];

    for (int i = 0; i < TAM; ++i) {
       for (int j = 0; j < COL; ++j) {
            menor = (menor > M[i][j])? M[i][j] : menor;
            maior = (maior < M[i][j])? M[i][j] : maior;

       }
    }

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < COL; j++){
            printf(" %30.2f ", M[i][j]);
        }
        puts("\n");
    }

    printf("a soma de %0.2f e %0.2f é: %0.2f\n", menor, maior, maior+menor);



    // printf("int: %d | ptr: %d\n", sizeof(int), sizeof(int*));


}
