#include <stdio.h>

#define TAM 3

int main(int argc, char *argv[]){
    int V[TAM][TAM];

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &V[i][j]);
        }
    }

    for (int i = 0; i < TAM; i++) {
       for (int j = 0; j < TAM; j++) {
           printf("%2d", V[i][j]);
       }
       printf("\n");
    }

    puts("os elementos da diagonal principal são: ");
    for (int i = 0; i < TAM; i++) {
       for (int j = 0; j < TAM; j++) {
           if (i == j) {
            printf("%d", V[i][j]);
           }
        }
       printf("\n");
    }


    return 0;
}
