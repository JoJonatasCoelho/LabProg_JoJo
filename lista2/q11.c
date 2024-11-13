// Refa ̧ca a quest ̃ao 11, considerando que os limites da faixa (A e B) sejam fornecidos pelo usu ́ario. O
// programa deve funcionar tanto para A > B quanto para B > A.

#include <stdio.h>
int main(void){
    int a, b;
    puts("Digite o limite 1 ");
    scanf("%d", &a);
    puts("Digite o limite 2: ");
    scanf("%d", &b);

    if( b > a ){
        b = b ^ a;
        a = b ^ a;
        b = b ^ a;
    }

    for(short int i = a; i <= b; i++){
        (i % 4)? puts("") : printf("o número %d é o quadrado\n", i*i);
    }
    return 0;
}
