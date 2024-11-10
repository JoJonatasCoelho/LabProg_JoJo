#include <stdio.h>

// Implementar um programa para resolver o seguinte problema: Jos ́e tem 150 cent ́ımetros e cresce 2
// cent ́ımetros por ano. O Pedro tem 110 cent ́ımetros e cresce 3 cent ́ımetros por ano. Em quantos anos
// Pedro ser ́a maior que Jos ́e?
void quest4()
{

    unsigned char jose = 150;
    unsigned char pedro = 110;
    unsigned char count = 0;

    while(jose >= pedro){
        count++;
        jose += 2;
        pedro += 3;
        printf("se passaram %d anos \n", count);
    }
}

