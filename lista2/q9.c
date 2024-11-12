// A s ́erie de Fibonacci  ́e formada pela seguinte sequˆencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva
// um algoritmo que gere a s ́erie de Fibonacci at ́e o vig ́esimo termo.

#include <stdio.h>
int main(void){
    int termo = 1;
    int ant = 1;
    int aux;
    printf("1°: %d\n2°: %d\n", ant, termo);

    termo = termo + ant;

    for (int i = 3; i <= 20; i++) {
        printf("%d°: %d\n", i,  termo);
        aux = termo;
        termo += ant;
        ant = aux;

    }

    return 0;
}
