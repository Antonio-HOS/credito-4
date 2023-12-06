#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, hipotenusa;
    printf("insira 2 numeros que represente os catetos de um triangulo retangulo: \nvalor 1: ");
    scanf("%f", &a);

    printf("valor 2: ");
    scanf("%f", &b);

    hipotenusa = sqrt(a*a + b*b);
    printf("informacoes do triangulo retangulo: \n perimetro do: %.3f \n tamanho da hipotenusa: %.3f \n area do triangulo%.3f", a + b +hipotenusa, hipotenusa, a * b /2);



    return 0;
}
