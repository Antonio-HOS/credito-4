#include <stdio.h>
#include <stdbool.h>

int main()
{
    float n1, n2, n3, n4, n5, nf, mediaParcial, mediaFinal;
    bool validacao = true, validacaofinal = true;

    while (validacao)
    {

        printf("digite o valor dos cinco creditos da disciplina CET635-LP1:\n");
        printf("nota do primero credito: ");
        scanf("%f", &n1);

        printf("nota do segundo credito: ");
        scanf("%f", &n2);

        printf("nota do terceiro credito: ");
        scanf("%f", &n3);

        printf("nota do quarto credito: ");
        scanf("%f", &n4);

        printf("nota do quinto credito: ");
        scanf("%f", &n5);

        if (n1 >= 0 && n2 >= 0 && n3 >= 0 && n4 >= 0 && n5 >= 0 && n1 < 10 && n2 <= 10 && n3 <= 10 && n4 <= 10 && n5 <= 10)
        {
            validacao = false;
        }
        else
        {
            printf("parece que ouve um equivoco nas notas, tente novamente \n");
        }
    }
    mediaParcial = (n1 + n2 + n3 + n4 + n5) / 5;

    if (mediaParcial < 7)
    {

        printf("suas notas nao foram suficiente (%.2f )para passar no direto no semestre :/  ... \n iforme o resultado da prova final: /n", mediaParcial);
        while (validacaofinal)
        {
            scanf("%f", &nf);

            if(nf>=0 && nf<= 10){
                validacaofinal = false;

            }else{
                printf("parece que ouve um equivoco na sua nota, digite novamente");
            }
        }

        mediaFinal = (mediaParcial * 5 + nf) / 6;

        if (mediaFinal < 7)
        {
            printf("infelizmente voce reprovou no semestre, pois tirou %.2f, que eh menor que 7", mediaFinal);
        }
        else
        {
            printf("parabens! voce consegui passar no semestre, com uma media de %.2f", mediaFinal);
        }
    }
    else
    {
        mediaFinal = mediaParcial;
        printf("sua media no semestre foi :%.2f", mediaFinal);
    }

    return 0;
}
