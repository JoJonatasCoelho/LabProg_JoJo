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


    unsigned char chunk[8];

    for (int linha = 0; linha < ALT ; linha++) {

        for (int largura; largura < LARG; largura++) {


            chunk[0] = (img[linha][largura] < img[linha-1][largura-1]) ? 1 : 0;
            chunk[1] = (img[linha][largura] < img[linha-1][largura]) ? 1 : 0;
            chunk[2] = (img[linha][largura] < img[linha-1][largura+1]) ? 1 : 0;
            chunk[3] = (img[linha][largura] < img[linha][largura-1]) ? 1 : 0;
            chunk[4] = (img[linha][largura] < img[linha][largura+1]) ? 1 : 0;
            chunk[5] = (img[linha][largura] < img[linha+1][largura-1]) ? 1 : 0;
            chunk[6] = (img[linha][largura] < img[linha+1][largura]) ? 1 : 0;
            chunk[7] = (img[linha][largura] < img[linha+1][largura+1]) ? 1 : 0;

            for (int i = 0; i < 8; i++) {
                printf("%hhu", chunk[i]);

            }
            puts("\n");
        }
    }

    return 0;
}
