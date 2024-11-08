#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned char escolha(unsigned char armarios){
    unsigned char old = armarios;
    unsigned char pos;

    srand(time(NULL));
    do{
        unsigned char mask = 0x01;
       
        pos = 1 + rand() % 8;

        mask <<= (pos-1);
        armarios = armarios | mask;

    if (armarios >= 255) {
        break;  
    } else {
        continue;  
}

    }while(armarios == old);

    printf("%hhu\n", armarios); // será substituido por uma lógica dde imprimir string binária

    return armarios;
}


unsigned char libera(unsigned char armarios, unsigned char pos){
    unsigned char mask = 0x01;

    armarios = armarios & ~(mask << (pos - 1));

    printf("%d \n", armarios);// será substituido por uma lógica dde imprimir string binária
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
                armarios = escolha(armarios);

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

