// Elabore um programa que apresente a quantidade de n ́umeros divis ́ıveis por 3 pertencentes a faixa
// A,B especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B

#include <stdio.h>

int main(){
    int a, b;
    puts("Digite o A: ");
    scanf("%d", &a);

    puts("Digite o B: ");
    scanf("%d", &b);

    if( b < a ){
        b = b ^ a;
        a = b ^ a;
        b = b ^ a;
    }

    int count  = 0;

    for(int i = a; i <= b; i++){
        if (!(i % 3)){
           count += 1;
       }
    }

    printf("resultado da quantidade: %d ", count);


    return 0;
}
