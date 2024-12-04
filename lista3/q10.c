#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define COL 5
#define MAX 100

int main(int argc, char *argv[])
{
    int M[TAM][COL];

    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < COL; j++){
            M[i][j] = rand() % MAX;
        }
    }

    int num;
    puts("Digite um número: ");
    scanf("%d", &num);

    int count = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < COL; j++){
            count += (M[i][j] == num)? 1 : 0;
        }
    }

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < COL; j++){
            printf("%3d", M[i][j]);
        }
        printf("\n");
    }

    printf("aparece %d vez", count);


}
