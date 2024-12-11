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
    unsigned char out[ALT][LARG];

    for (int linha = 0; linha < ALT ; linha++) {

        for (int largura = 0; largura < LARG; largura++) {
            img[linha][largura] = (unsigned char)( rand() % MAX );
        }

    }


    unsigned char chunk[8];

    for (int linha = 0; linha < ALT ; linha++) {

        for (int largura = 0; largura < LARG; largura++) {

            printf("O valor do pixel era: %hhu\n", img[linha][largura]);

            if (linha != 0) {
                if (largura != 0) {
                    chunk[0] = (img[linha][largura] < img[linha-1][largura-1]) ? 1 : 0;
                    chunk[1] = (img[linha][largura] < img[linha-1][largura]) ? 1 : 0;
                    chunk[2] = (img[linha][largura] < img[linha-1][largura+1]) ? 1 : 0;
                    chunk[7] = (img[linha][largura] < img[linha][largura-1]) ? 1 : 0;
                }
                else {
                    chunk[0] = 0;
                    chunk[1] = 0;
                    chunk[2] = 0;
                    chunk[7] = 0;

                }
            } else{
                chunk[0] = 0;
                chunk[1] = 0;
                chunk[2] = 0;
                    if(largura != 0)
                        chunk[7] = (img[linha][largura] < img[linha][largura-1]) ? 1 : 0;
                    else
                        chunk[7] = 0;
            }

            if (linha != ALT) {
                if (largura != LARG) {
                    chunk[6] = (img[linha][largura] < img[linha+1][largura-1]) ? 1 : 0;
                    chunk[5] = (img[linha][largura] < img[linha+1][largura]) ? 1 : 0;
                    chunk[4] = (img[linha][largura] < img[linha+1][largura+1]) ? 1 : 0;
                    chunk[3] = (img[linha][largura] < img[linha][largura+1]) ? 1 : 0;

                } else {
                    chunk[6] = 0;
                    chunk[5] = 0;
                    chunk[4] = 0;
                    chunk[3] = 0;
                }
            } else {
                    chunk[6] = 0;
                    chunk[5] = 0;
                    chunk[4] = 0;
                    if (largura != LARG)
                        chunk[3] = (img[linha][largura] < img[linha][largura+1]) ? 1 : 0;
                    else
                        chunk[3] = 0;

            }

            for(int bit = 0; bit < 8; bit++){
                printf("[%d] chunk: %hhu\n", bit, chunk[bit]);
            }

            out[linha][largura] = 0;

            for(int bit = 0; bit < 8; bit++){
                out[linha][largura] += (chunk[bit] == 1) ? 0x1 << bit: 0;
                printf("n%d = %hhu\n", bit, (chunk[bit] == 1) ? 0x1 << bit: 0);
            }

            printf("pixel_final[%d][%d]: %hhu\n", linha, largura, out[linha][largura]);

        }

    }

    return 0;
}
