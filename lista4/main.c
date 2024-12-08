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



    for (int linha = 0; linha < ALT ; linha++) {

        for (int largura; largura < LARG; largura++) {
                if (((linha != 0) && linha != 1080) && ((largura != 0) && (largura != 1920)))  {
                    img[linha-1][largura-1] = (img[linha][largura] < img[linha-1][largura-1]) ? 1 : 0;
                    img[linha-1][largura] = (img[linha][largura] < img[linha-1][largura]) ? 1 : 0;
                    img[linha-1][largura+1] = (img[linha][largura] < img[linha-1][largura+1]) ? 1 : 0;

                    img[linha-1][largura-1] = (img[linha][largura] < img[linha-1][largura-1]) ? 1 : 0;
                    img[linha-1][largura] = (img[linha][largura] < img[linha-1][largura]) ? 1 : 0;
                    img[linha-1][largura+1] = (img[linha][largura] < img[linha-1][largura+1]) ? 1 : 0;
                    img[linha][largura-1] = (img[linha][largura] < img[linha][largura-1]) ? 1 : 0;
                    img[linha][largura+1] = (img[linha][largura] < img[linha][largura+1]) ? 1 : 0;
                    img[linha+1][largura-1] = (img[linha][largura] < img[linha+1][largura-1]) ? 1 : 0;
                    img[linha+1][largura] = (img[linha][largura] < img[linha+1][largura]) ? 1 : 0;
                    img[linha+1][largura+1] = (img[linha][largura] < img[linha+1][largura+1]) ? 1 : 0;


                }
        }
    }
    for (int linha = 0; linha < ALT ; linha++) {

        for (int largura; largura < LARG; largura++) {
            printf(" %hhu ", img[linha][largura]);
        }

    }




    return 0;
}
