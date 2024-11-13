// Elaborar um programa que apresente a m ́edia aritm ́etica dos n ́umeros inteiros existentes entre uma
// faixa especificada pelo usu ́ario.

#include <stdio.h>

int main(int argc, char *argv[]){
    int n;
    float med = 0;
    puts("Digite o número: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++)
        med += i;

    med /= n;

    printf("%0.2f\n", med);


    return 0;
}
