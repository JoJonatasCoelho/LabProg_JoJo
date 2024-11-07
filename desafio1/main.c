#include <stdio.h>
#include <math.h>
#include <time.h>

unsigned char escolha(unsigned char armarios, unsigned char pos){
    unsigned char mask = 0x01;

    mask <<= (pos-1);
    armarios = armarios | mask;

    printf("%hhu\n", armarios);

    return armarios;
}
unsigned char libera(unsigned char armarios, unsigned char pos){
    unsigned char mask = 0x01;

    armarios = armarios & ~(mask << (pos - 1));

    printf("%d \n", armarios);
    return armarios;
}

int main(int argc, char *argv[]){
    unsigned char armarios = 0x00;
    unsigned char input = 0;
    unsigned char pos;

    do {
        puts("Escolha a opçao: ");
        puts("[1]Ocupar armario");
        puts("[2]Liberar armario");
        puts("[3]Sair");
        scanf("%hhu", &input);

        switch (input) {
            case 1:
                scanf(" %hhu", &pos);
                armarios = escolha(armarios, pos);

                break;
            case 2:
                scanf(" %hhu", &pos);
                armarios = libera(armarios, pos);

                break;
            case 3:
                break;
            default:
                puts("Opção inválida");
        }
    } while (input != 3);


  return 0;
}

