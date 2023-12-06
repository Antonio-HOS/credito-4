#include <stdio.h>
#include <math.h>

int main()
{
    float lado, diagonal, perimetro, area;
    printf("insira o tamanho da lateral de um quarado qualquer \n");
    scanf("%f", &lado);

    diagonal = sqrt(lado *lado + lado * lado);
    perimetro = lado* 4;
    area = lado * lado;

    printf("informacoes do quadrado: \n diagonal : %.4f \n perimetro : %.2f \n area : %.2f", diagonal, perimetro, area);

    return 0;
}
