#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MATRIZ 3
#define TAM 8
#define MAX 255

void desenhar_bitmap(unsigned char *v, int alt, int larg){
    for (int k = 0; k < alt*larg ; k++) {
        printf(" %3hhu ", *(v + k));
        if (!((k+1) % larg)) printf("\n");
    }

}


int main(int argc, char *argv[])
{
    srand(time(NULL));

    unsigned char *img;
    unsigned char *out;

    int linhas, largura;
    puts("Digite a altura: ");
    scanf("%d", &linhas);
    puts("Digite a largura: ");
    scanf("%d", &largura);

    int n = largura * linhas;

    img = malloc(n * sizeof(unsigned char));
    out = malloc(n * sizeof(unsigned char));

    for (int elemento = 0; elemento < n; elemento++) {
        *(img + elemento) = (unsigned char)( rand() % MAX );
    }

    desenhar_bitmap(img, linhas, largura);

    unsigned char chunk[TAM];

    printf("O endereço é %p\n", img);

    for (int elemento = 0; elemento < n; elemento++) {
        // *(img + elemento);
        puts("\nMatriz:");
                                    // o ultimo erro tá aqui
        for (int k = elemento; k < MATRIZ * largura + elemento; k++)
        {
            printf("[%d] %3hhu ", k, *(img - largura + k -1));

            if((k == elemento + MATRIZ -1) || (k == elemento + MATRIZ + largura - 1) || (k == elemento + MATRIZ + 2 * largura -1)){
                k += largura-MATRIZ;
                puts("\n");
            }

        }
        puts("\n\n");

    }

    // for (int linha = 0; linha < ALT ; linha++) {

    //     for (int largura = 0; largura < LARG; largura++) {

    //         puts("\nMatriz:");
    //         for (int i = 0; i < 3; i++) {
    //             for (int j = 0; j < 3; j++) {
    //                 printf(" %3hhu ", img[linha-1 + i][largura - 1 + j]);
    //             }
    //             puts("\n");
    //         }

    //         printf("O valor do pixel era: %hhu\n", img[linha][largura]);

    //         if (linha != 0) {
    //             if (largura != 0) {
    //                 chunk[0] = (img[linha][largura] < img[linha-1][largura-1]) ? 1 : 0;
    //                 chunk[1] = (img[linha][largura] < img[linha-1][largura]) ? 1 : 0;
    //                 chunk[2] = (img[linha][largura] < img[linha-1][largura+1]) ? 1 : 0;
    //                 chunk[7] = (img[linha][largura] < img[linha][largura-1]) ? 1 : 0;
    //             }
    //             else {
    //                 chunk[0] = 0;
    //                 chunk[1] = 0;
    //                 chunk[2] = 0;
    //                 chunk[7] = 0;

    //             }
    //         } else{
    //             chunk[0] = 0;
    //             chunk[1] = 0;
    //             chunk[2] = 0;
    //                 if(largura != 0)
    //                     chunk[7] = (img[linha][largura] < img[linha][largura-1]) ? 1 : 0;
    //                 else
    //                     chunk[7] = 0;
    //         }

    //         if (linha != ALT) {
    //             if (largura != LARG) {
    //                 chunk[6] = (img[linha][largura] < img[linha+1][largura-1]) ? 1 : 0;
    //                 chunk[5] = (img[linha][largura] < img[linha+1][largura]) ? 1 : 0;
    //                 chunk[4] = (img[linha][largura] < img[linha+1][largura+1]) ? 1 : 0;
    //                 chunk[3] = (img[linha][largura] < img[linha][largura+1]) ? 1 : 0;

    //             } else {
    //                 chunk[6] = 0;
    //                 chunk[5] = 0;
    //                 chunk[4] = 0;
    //                 chunk[3] = 0;
    //             }
    //         } else {
    //                 chunk[6] = 0;
    //                 chunk[5] = 0;
    //                 chunk[4] = 0;
    //                 if (largura != LARG)
    //                     chunk[3] = (img[linha][largura] < img[linha][largura+1]) ? 1 : 0;
    //                 else
    //                     chunk[3] = 0;

    //         }

    //         for(int bit = 0; bit < 8; bit++){
    //             printf("[%d] chunk: %hhu\n", bit, chunk[bit]);
    //         }

    //         out[linha][largura] = 0;

    //         for(int bit = 0; bit < 8; bit++){
    //             out[linha][largura] += (chunk[bit] == 1) ? 0x1 << bit: 0;
    //         }

    //         printf("pixel_final[%d][%d]: %hhu\n", linha, largura, out[linha][largura]);

    //     }

    // }

    // desenhar_bitmap(out, ALT, LARG);

    return 0;
}

