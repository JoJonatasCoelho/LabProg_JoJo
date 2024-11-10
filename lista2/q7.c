// Para que a divisao entre 2 n ́umeros possa ser realizada, o divisor n ̃ao pode ser nulo (zero). Escreva
// um programa para ler 2 valores e imprimir o resultado da divis ̃ao do primeiro pelo segundo. OBS: O
// programa deve validar a leitura do segundo valor (que n ̃ao deve ser nulo). Enquanto for fornecido um
// valor nulo a leitura deve ser repetida.

#include <stdio.h>

    int main(void){
    int num1, num2;

    puts("Digite o primeiro numero");
    scanf("%d", &num1);

    do{
    puts("Digite o segundo numero (deve ser diferente de 0)");
    scanf("%d", &num2);

    }while(num2 == 0);

    printf("%0.2f \n", (float)num1 / num2);

}
