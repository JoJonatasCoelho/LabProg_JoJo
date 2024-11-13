// Elabore um programa que calcule o somat ́orio de todos os n ́umeros pares pertencentes a faixa A,B
// especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.


#include <stdio.h>

int main(int argc, char *argv[]){
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

    int soma = 0;

    for(int i = a; i <= b; i++){
        if (!(i & 0x01)){
           soma += i;
       }
    }

    printf("resultado da soma: %d ", soma);


    return 0;
}
