#include <stdio.h>
#include <math.h>

int main()
{
    float a, b ,c, x;
    printf("digite 3 numeros reais quaisquer para compor uma funcao de segundo grau, respectivamente a, b e c: \n");
    printf("valor a: ");
    scanf("%f", &a);
    printf("valor b: ");
    scanf("%f", &b);
    printf("valor c: ");
    scanf("%f", &c);

    x = -c/(a*a + b);

    printf("%f",x);



    return 0;
}
