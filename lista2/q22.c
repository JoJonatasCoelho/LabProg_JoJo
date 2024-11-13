#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{

    unsigned int n, count = 0;
    int expdiv = 10;
    puts("Digite um número: ");
    scanf("%d", &n);


    for(int i = 1; i <= 10; i++){
        if (expdiv == 0)
            expdiv = 1;
        long long unsigned divisor = pow(10, expdiv);
        long long unsigned mod = pow(10, i);

        printf("o divisor está: %llu \nmod está: %llu \n\n\n", divisor, mod);

        if((n / divisor % mod) == 7)
            count++;
        expdiv--;
    }
    printf("%u \n",count);
    return 0;
}
