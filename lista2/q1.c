#include <stdio.h>

// Implemente um programa que tenha como entrada um n ́umero (1-7) que corresponde a um dos dias
// da semana e imprima na tela o nome do dia correspondente (domingo, segunda, ter ̧ca, quarta, quinta,
// sexta, s ́abado). Se o n ́umero lido n ̃ao estiver no intervalo 1-7, imprima: “N ́umero de dia n ̃ao v ́alido”. O
// programa deve permanecer executando at ́e que o usu ́ario tecle o numero 0. (Utilize obrigatoriamente
// teste no in ́ıcio).

void quest1()
{
    unsigned char dia;

    do {
        puts("Digite o dia da semana: ");
        scanf(" %hhu", &dia);

        switch (dia) {
            case 1:
                puts("O dia escolhido foi domingo");
                break;

            case 2:
                puts("O dia escolhido foi segunda");
                break;

            case 3:
                puts("O dia escolhido foi terça");
                break;

            case 4:
                puts("O dia escolhido foi quarta");
                break;

            case 5:
                puts("O dia escolhido foi quinta");
                break;

            case 6:
                puts("O dia escolhido foi sexta");
                break;

            case 7:
                puts("O dia escolhido foi sábado");
                break;

            default:
                puts("Numero de dia invalido");
                break;
    }

    }while(dia != 0);
    puts("Desligando programa por ter apertado 0");

}


