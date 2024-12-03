// Um triˆangulo retˆangulo pode ter lados que s ̃ao valores inteiros. O conjunto de trˆes valores inteiros para
// os lados de um triˆangulo retˆangulo  ́e chamado de tripla de Pit ́agoras. Esses trˆes lados precisam satisfazer
// o relacionamento de que a soma do quadrado de dois catetos  ́e igual ao quadrado da hipotenusa. Ache
// todas as triplas de Pit ́agoras n ̃ao superiores a 500 para cateto1, cateto2 e hipotenusa. Este  ́e um
// exemplo de computa ̧c ̃ao por for ̧ca bruta. Isso n ̃ao  ́e esteticamente atraente para muitas pessoas. Mas
// existem muitos motivos para essas t ́ecnicas serem importantes. Como vocˆe descobrir ́a mais adiante no
// Curso de Ciˆencia da Computa ̧c ̃ao, existem in ́umeros problemas interessantes para os quais n ̃ao existe
// uma t ́ecnica algor ́ıtmica conhecida al ́em da simples for ̧ca bruta.

#include <stdio.h>
#define LIM 500

int main(int argc, char *argv[]){

    for (int a = 1; a <=LIM; a++){
        unsigned long long sqrt_a = a * a;
        for (int b = 1; b <= LIM; b++) {
            unsigned long long sqrt_b = b * b;
            for (int c = 1; c <= LIM; c++) {
                unsigned long long sqrt_c = c * c;
                if (sqrt_a + sqrt_b == sqrt_c) {
                    printf("%d + %d = %d\n", a, b, c);
                }
            }
        }

    }

    return 0;
}
