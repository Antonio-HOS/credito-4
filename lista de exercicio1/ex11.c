#include <stdio.h>

int main()
{
    float y1, y2, x1, x2;
    float a, b;
    printf("insira x1 e y1 (numeros inteiros) \n");
    scanf("%f", &x1);
    scanf("%f", &y1);
    printf("insira x1 e y1 (numeros inteiros) \n");
    scanf("%f", &x2);
    scanf("%f", &y2);


    a = (y1 - y2)/(x1 - x2);
    b = y1-(a*x1);

    printf("sua funcao eh Y=%.5fX+(%.2f)", a, b);

    return 0;
}
