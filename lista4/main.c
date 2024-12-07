#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ALT 1080
#define LARG 1920
#define MAX 250

int main(int argc, char *argv[])
{
    srand(time(NULL));

    unsigned char img[ALT][LARG];

    for (int linha = 0; linha < ALT ; linha++) {

        for (int largura; largura < LARG; largura++) {
            img[linha][largura] = (unsigned char)( rand() % MAX );
        }

    }

    puts("Seila");


    return 0;
}
