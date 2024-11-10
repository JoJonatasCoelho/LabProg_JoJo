#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int voto = 0;
    int votos_paulo = 0, votos_renata = 0, votos_branco = 0, votos_nulos = 0;
    int total_votos = 0;
    char confirmacao;


    puts("Urna Eletrônica para Eleição\n");
    puts("Digite o número do candidato para votar:\n");
    puts("5 - Paulo\n7 - Renata\n0 - Branco\n(qualquer outro número será considerado Nulo)\n");
    puts("Para encerrar a votação, digite um número negativo.\n\n");

    while (1) {
        printf("Digite seu voto: ");
        scanf("%d", &voto);

    }

    return 0;
}
