#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void sort(int array[], int size){
    int i,j,dummy;

    for (j = 0; j < size-1; j++)
    {
        for (i = j+1; i < size ; i++)
        {
            if (array[i] < array[j])
            {
                dummy = array[i];
                array[i] = array[j];
                array[j] = dummy;
            }
        }
    }
}


void bubbleSort(int array[],int size){
    int dummy;

    for(int pass = 0; pass <size-1 ; pass++){
        for(int i = 0; i < size-1; i++){
            if(array[i] > array[i+1]){
                dummy = array[i];
                array[i] = array[i+1];
                array[i+1] = dummy;
            }
        }
    }
}

#define TAMANHO_VETOR 100

int main(int argc, char *argv[])
{

    int max;
    int vetor[TAMANHO_VETOR];

    printf("Digite o valor máximo: ");
    scanf("%d", &max);


    srand(time(NULL));

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] = rand() % (max + 1);
    }

    printf("Vetor de %d números pseudoaleatórios no intervalo [0, %d]:\n", TAMANHO_VETOR, max);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    sort(vetor, TAMANHO_VETOR);

    printf("Vetor de %d números pseudoaleatórios ordenado no intervalo [0, %d]:\n", TAMANHO_VETOR, max);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");


    // ordenado pelo bubble sort
    bubbleSort(vetor, TAMANHO_VETOR);

    printf("Vetor de %d números pseudoaleatórios ordenado no intervalo [0, %d]:\n", TAMANHO_VETOR, max);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");



    return 0;
}
