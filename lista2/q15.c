// Elaborar um programa que apresente os resultados das potˆencias do valor de base 3, elevado a um
// expoente que varie do valor 0 a 7.

#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    for (int exp = 0; exp <= 7; exp++) {
        printf("%0.2f\n", pow(3, exp));

    }
    return 0;
}
