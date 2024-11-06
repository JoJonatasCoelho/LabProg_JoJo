#include <stdio.h>

int escolha(void);
int libera(void);

int main(int argc, char *argv[]){
    unsigned char armarios;
    unsigned char input = 0;

    do {
        puts("Escolha a opçao: ");
        puts("[1]Ocupar armario");
        puts("[2]Liberar armario");
        puts("[3]Sair");
        scanf("%hhu", &input);
    
        switch (input) {
            case 1:
                escolha();
                break;
            case 2:
                libera();
                break;
            case 3:
                break;
            default:
                puts("Opção inválida");
        }
    } while (input != 3);


  return 0;    
}

