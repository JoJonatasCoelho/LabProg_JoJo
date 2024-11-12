// Uma loja vende seus produtos no sistema entrada mais duas presta ̧c ̃oes, sendo a entrada maior do que
// ou igual `as duas presta ̧c ̃oes; estas devem ser iguais, inteiras e as maiores poss ́ıveis. Por exemplo, se o
// valor da mercadoria for R$ 270,00, a entrada e as duas presta ̧c ̃oes s ̃ao iguais a R$ 90,00; se o valor da
// mercadoria for R$ 302,75, a entrada  ́e de R$ 102,75 e as duas presta ̧c ̃oes s ̃ao iguais a R$ 100,00. Escreva
// um programa que receba o valor da mercadoria e forne ̧ca o valor da entrada e das duas presta ̧c ̃oes, de
// acordo com as regras acima.

#include <math.h>
#include <stdio.h>
int main(void){

    float valor = 0, entrada = 0, parcela = 0;

    puts("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("%f \n", floor(valor));

    parcela = floor(valor / 2);
    entrada = valor - parcela;

    printf("A entrada foi: R$%0.2f\n", entrada);
    printf("A parcela ficou: R$%d\n", (int)parcela/2 );



    return 0;
}
