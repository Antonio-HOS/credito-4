#include <stdio.h>
int main(void)
{
    float salario, salarioliquido, valeal, impostoDeRenda, impostoInss, impostoFgts, impostoRat, impostoTotal;
    float salariomin = 1320.0;
    printf("insira o seu salario: \n");
    scanf("%f", &salario);

    printf("quanto voce recebe de vale alimentacao \n");
    scanf("%f", &valeal);

    impostoDeRenda = salario*0.275;
    impostoInss = salario*0.014;
    impostoFgts = salario*0.08;
    impostoRat = salario*0.02;

    impostoTotal= impostoDeRenda + impostoFgts + impostoInss + impostoRat;

    salarioliquido = salario - impostoTotal;  

    if(salarioliquido<salariomin){
        salarioliquido = salariomin;
    };
    salarioliquido=salarioliquido + valeal;

    printf("seu salario liquido e de R$%.2f \n", salarioliquido );
    printf("voce paga R$%.2f de imposto sendo eles:\n R$%.2f de imposto de renda. \n R$%.2f de imposto de INSS. \n R$%.2f de imposto do FGTS. \n R$%.2f de imposto RAT. \n",impostoTotal, impostoDeRenda,impostoInss, impostoFgts,impostoRat);
    return 0;
}
