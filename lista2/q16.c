// Escreva um programa que apresente o somat ́orio de todos os n ́umeros divis ́ıveis por 3 pertencentes ao
// intervalo [0,100] e o somat ́orio de todos os n ́umeros divis ́ıveis por 5 pertencentes ao intervalo ]100,200].
// Obs.: Utilize apenas um la ̧co de repeti ̧c ̃ao.
#include <stdio.h>

int main(int argc, char *argv[]){
    unsigned count;
    for (count = 0; count <= 100; count++) {
        if (!(count % 3))
            printf("%u\n", count);
    }
    puts("\ndivisiveis por 5");
    for (count = 101; count <= 200; count++) {
        if (!(count % 5))
            printf("%u\n", count);
    }


    return 0;
}
