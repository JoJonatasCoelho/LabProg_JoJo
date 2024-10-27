#include <stdio.h>
#include <math.h>

#define PI 3.14159

void questao1(){
    int num = 0;
    puts("Digite um inteiro a ser convertido: ");
    scanf("%d",&num);
    printf("Hexadecimal: %x \n",num);
    printf("Octal: %o",num);
}
void questao2(){
    float num = 0;
    puts("Digite um número real: ");
    scanf("%f",&num);
    printf("%0.1f",num);

}
void questao3(){
    int num = 0;
    puts("Digite um número inteiro");
    scanf("%d",&num);
    printf("Triplo: %d \n", 3*num);
    printf("Quadrado: %d \n", num*num);
    printf("Meio: %0.2f \n",num*0.5);
}
void questao4(){
    float num = 0;
    puts("Digite o valor da conta: ");
    scanf("%f",&num);
    printf("Valor final: %f",num * 1.1);
}
void questao5(){
    float altura = 0;
    char sexo;
    puts("Digite a sua altura: ");
    scanf("%f",&altura);
    puts("Digite se você e homem ou mulher (M ou H)");
    scanf(" %c",&sexo);

    switch (sexo)
    {
    case 'M':
        printf("Peso: %0.2f", 62.1 * altura - 44.7);
        break;
    case 'H':
        printf("Peso: %0.2f", 72.7 * altura - 58);
        break;
    default:
        printf("Sexo inválido");
        break;
    }
}
void questao6(){
    float horas = 0;
    float minutos = 0;
    float segundos = 0;
    puts("Digite uma quantidade de horas: ");
    scanf("%f",&horas);
    puts("Digite uma quantidade de minutos: ");
    scanf("%f",&minutos);
    puts("Digite uma quantidade de segundos: ");
    scanf("%f",&segundos);
    minutos = minutos + horas*60;
    segundos = segundos + minutos*60;
    printf("Segundos totais: %f",segundos);

}


// Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
// quadrado.
void questao7(){
    int num = 0;
    puts("Digite um valor inteiro: ");
    scanf("%d", &num);
    printf("%d\n", num*num);
}

// Escreva um programa que leia um valor num ́erico inteiro e apresente como resultado os seus valores
// sucessor e antecessor.
void questao8()
{
    int num;
    puts("Digite um inteiro: ");
    scanf("%d", &num);

    printf("o sucessor do número é: %d\n", ++num);
    printf("o antecessor do número é: %d\n", num - 2);

}

// Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
// f ́ormula VOLUME = COMPRIMENTO * LARGURA * ALTURA.
void questao9(){
    puts("******** Calculador de volume (de caixas retangulares) ********** \n\n");

    float compr, larg, altura;
    puts("Digite o comprimento da caixa: ");
    scanf("%f", &compr);

    puts("Digite a largura da caixa: ");
    scanf("%f", &larg);

    puts("Digite a altura da caixa: ");
    scanf("%f", &altura);

    printf("O volume da caixa é de: %0.2f metricas cubicas\n", compr*larg*altura);

}

// Elabore um programa que apresente o valor da convers ̃ao em d ́olar de um valor lido em real. O
// programa deve solicitar o valor da cota ̧c ̃ao do d ́olar e tamb ́em a quantidade de reais que o usu ́ario
// deseja converter.

void questao10()
{
    float contacao, reais;
    puts("Escreva a contacao do dolar atual: ");
    scanf("%f", &contacao);

    puts("Escreva o valor em reais que deseja converter para dolares: ");
    scanf("%f", &reais);

    printf("o valor de %0.2f em dolares e de: %0.2f \n", reais, reais / contacao);
}

// Escreva um programa que pe ̧ca ao usu ́ario para digitar dois n ́umeros, obtenha-os do usu ́ario e imprima
// a soma, o produto, a diferen ̧ca, o quociente e o resto da divis ̃ao dos dois n ́umeros.

void questao11()
{
    float num1, num2;

    puts("Digite o primeiro número: ");
    scanf("%f", &num1);

    puts("Digite o segundo número: ");
    scanf("%f", &num2);


    printf("A soma dos dois numeros e: %0.2f\n", num1 + num2);
    printf("A diferenca dos dois numeros e: %0.2f\n", num1 - num2);
    printf("O quociente dos dois numeros e: %0.2f\n", num1 / num2);
    printf("O resto da divisao dos dois numeros e: %d\n", (int)num1 % (int)num2);
}

// Escreva um programa que leia duas vari ́aveis A e B e efetue a troca dos valores. O objetivo  ́e que a
// vari ́avel A passe a conter o valor de B e a vari ́avel B passe a possuir o valor de A. Apresente os valores
// ap ́os a efetiva ̧c ̃ao do processamento da troca.

void questao12()
{
    int a, b;

    puts("escreva o valor de a: ");
    scanf("%d", &a);

    puts("escreva o valor de b: ");
    scanf("%d", &b);

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    printf("A = %d  B = %d\n", a, b);
}

// Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
// Fahrenheit. A f ́ormula de vers ̃ao  ́e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
// temperatura em Celsius.

void questao13()
{
    float C;

    puts("Digite a temperatura em graus para ser convertida: ");
    scanf("%f", &C);

    printf("A temperatura em Fahrenheit e de: %0.2fF\n", (9 * C + 160) / 5);

}

// Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o n ́umero de
// dias trabalhados pelo vendedor e imprima o valor l ́ıquido a ser pago ao mesmo, sabendo que se ele
// trabalhou at ́e 10 dias n ̃ao tem direito `a gratifica ̧c ̃ao, se ele trabalhou acima de 10 dias e at ́e 20 dias
// tem direito `a gratifica ̧c ̃ao de 20%, se ele trabalhou acima de 20 dias tem direito `a gratifica ̧c ̃ao de 30%.
// Sempre s ̃ao descontados 10% de imposto de renda em cima do valor bruto.

void questao14()
{
    int dias;

    puts("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias);

    float bruto = dias * 50.25;

    if (dias <= 10){
        printf("o valor recebido será de: %0.2f\n", bruto * 0.9);
    }
    else if (dias <= 20)
        printf("O valor a ser recebido sera de: %0.2f\n", bruto * 1.2 * 0.9);
    else
        printf("O valor a ser recebido sera de: %0.2f\n", bruto * 1.3 * 0.9);
}

// Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa,  ́e
// necess ́ario possuir alguns dados, tais como o valor da hora aula, n ́umero de horas trabalhadas no mˆes e
// percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu sal ́ario bruto para fazer
// o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
// liquido do professor.

void questao15()
{
    float valorHora, horasTrabalhadas, percentualINSS;
    float salarioBruto, descontoINSS, salarioLiquido;

    puts("Digite o valor da hora-aula: ");
    scanf("%f", &valorHora);

    puts("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horasTrabalhadas);

    puts("Digite o percentual de desconto do INSS (em %): ");
    scanf("%f", &percentualINSS);

    salarioBruto = valorHora * horasTrabalhadas;

    descontoINSS = salarioBruto * (percentualINSS / 100);

    salarioLiquido = salarioBruto - descontoINSS;

    printf("Salário Bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto do INSS: R$ %.2f\n", descontoINSS);
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);

}

// Escrever um programa que receba um valor inteiro do usu ́ario e apresente o seu valor absoluto (m ́odulo).
// N ̃ao utilize estrutura de decis ̃ao if.

void questao16()
{
    int num;

    puts("Escreva um numero inteiro: ");
    scanf("%d", &num);

    (num < 0) ? num = printf("%d\n", ~num+1) : printf("%d\n", num);;


}

// Escreva um programa que leia o raio de um c ́ırculo e imprima seu diˆametro, o valor de sua circunferˆencia
// e sua  ́area. Use o valor de 3,14159 para “pi”. Fa ̧ca cada um destes c ́alculos dentro da instru ̧c ̃oes (ou
// instru ̧c ̃oes) printf e use o especificador de convers ̃ao %f.

void questao17()
{
    float raio;
    puts("Digite o raio");
    scanf("%f", &raio);
    printf("Diametro = %f \n", 2 * raio);
    printf("Circuferencia = %0.2f\n", 2 * PI * raio);
    printf("Área = %0.2f \n", PI * (raio * raio));
}

// Escreva um programa que imprima um retˆangulo, uma elipse, uma seta e um losango

void questao18()
{
    puts("Retângulo:");
    puts("**********");
    puts("*        *");
    puts("*        *");
    puts("**********");
    puts("");

    puts("Elipse:");
    puts("   ****   ");
    puts(" *      * ");
    puts("*        *");
    puts(" *      * ");
    puts("   ****   ");
    puts("");

    puts("Seta:");
    puts("    *    ");
    puts("   ***   ");
    puts("  *****  ");
    puts("    *    ");
    puts("    *    ");
    puts("    *    ");
    puts("");

    puts("Losango:");
    puts("    *    ");
    puts("   * *   ");
    puts("  *   *  ");
    puts(" *     * ");
    puts("  *   *  ");
    puts("   * *   ");
    puts("    *    ");

}

// Escreva um programa que receba um n ́umero inteiro e ent ̃ao determine e imprima se ele  ́e par ou  ́ımpar.
// Obs.: N ̃ao utilizar estrutura de decis ̃ao if.

void questao19()
{
    int num;
    puts("Escreva um número inteiro: ");
    scanf("%d", &num);

    (num % 2) ? puts("é impar") : puts("e par");
}

// Escreva um programa que leia dois inteiros e ent ̃ao determine e imprima se o primeiro  ́e m ́ultiplo do
// segundo. Obs.: N ̃ao utilizar estrutura de decis ̃ao if.

void questao20()
{
    int num1, num2;
    puts("Escreva o primeiro inteiro: ");
    scanf("%d", &num1);

    puts("Escreva o segundo inteiro: ");
    scanf("%d", &num2);

    (num1 % num2) ? puts("Nao e multiplo do segundo") : puts("e multiplo do segundo");
}

// Escreva um programa em C que imprima os inteiros equivalentes a algumas letras mai ́usculas, letras
// min ́usculas e s ́ımbolos especiais. No m ́ınimo, determine os n ́umeros inteiros equivalentes ao conjunto
// seguinte: A BCabc 0 12 $ * + / e o caractere espa ̧co em branco.

void questao21()
{
    for(int i = 32; i <= 126; i++){
        printf("O charactere: \"%c\" e representado por %d na tabela ASCII\n", (char)i, i);
    }
}


// Escreva um programa que receba a entrada de um n ́umero de trˆes d ́ıgitos, separe o n ́umero em seus
// d ́ıgitos componentes e reconstrua um n ́umero com os componentes na ordem inversa. Exemplo: para
// entrada de 123, a resposta do programa seria 321.
void questao22()
{
    int num;
    puts("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("%d%d%d\n",   num % 10, num / 10 % 10,num / 100);
}

// Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.
// Obs.: Utilize operadores bin ́arios.

void questao23()
{
    int x = 10, n = 2;

    printf("produto: %d \n", x << n);

}

// Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
// h ́a neste tempo.

void questao24()
{
        int tempo_segundos, horas, minutos, segundos;

    // Entrada do tempo em segundos
    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo_segundos);

    // Cálculo de horas, minutos e segundos
    horas = tempo_segundos / 3600;            // 1 hora = 3600 segundos
    minutos = (tempo_segundos % 3600) / 60;   // Resto dividido por 60 para obter minutos
    segundos = tempo_segundos % 60;           // Resto final para os segundos

    // Exibição do resultado
    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos\n",
           tempo_segundos, horas, minutos, segundos);
}


// Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distˆancia entre os dois
// pontos no plano. (Utilize a fun ̧c ̃ao sqrt (numero), biblioteca math.h).

void questao25()
{
    int x, y, x1, y1;

    puts("digite o x inicial");
    scanf("%d", &x);

    puts("digite o y inicial");
    scanf("%d", &y);

    puts("digite o x final");
    scanf("%d", &x1);

    puts("digite o y final");
    scanf("%d", &y1);

    float coord = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));

    printf("%0.2f \n", coord);
}

// Escreva um programa que solicite 3 n ́umeros em ponto flutuante e imprima a m ́edia aritm ́etica e
// geom ́etrica. (Utilize a fun ̧c ̃ao pow(base, expoente) da biblioteca math.h).

void questao26()
{
    float num1, num2, num3;
    float mediaAritmetica, mediaGeometrica;

    // Leitura dos três números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    // Cálculo da média aritmética
    mediaAritmetica = (num1 + num2 + num3) / 3.0;

    // Cálculo da média geométrica
    mediaGeometrica = pow(num1 * num2 * num3, 1.0 / 3.0);

    // Exibição dos resultados
    printf("Média Aritmética: %.2f\n", mediaAritmetica);
    printf("Média Geométrica: %.2f\n", mediaGeometrica);

}

int main()
{
    questao25();
    return 0;
}
