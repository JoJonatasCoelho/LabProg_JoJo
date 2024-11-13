// Um pal ́ındromo  ́e um n ́umero, ou frase textual, que pode ser lido da mesma forma da esquerda para
// a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco d ́ıgitos  ́e um pal ́ındromo:
// 12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco d ́ıgitos e determine se
// ele  ́e ou n ̃ao um pal ́ındromo. [Dica: use os operadores de divis ̃ao e m ́odulo para separar o n ́umero em
// seus d ́ıgitos individuais.]

#include <stdio.h>

int main(int argc, char *argv[]){

    int palin;

    puts("Digite um palindromo de 5 digitos: ");
    scanf("%d", &palin);

    int begin =  palin % 100;
    int end = palin / 1000;
    if(end / 10 == begin % 10){
        if(begin / 10 == end % 10){
            puts("É palindromo");
            return 0;
        }
    }
    puts("Não é palindromo");
    return 0;
}
