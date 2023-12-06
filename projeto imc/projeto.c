#include <stdio.h>

#define C_BLACK     "\033[30m"
#define C_RED       "\033[31m"
#define C_GREEN     "\033[32m"
#define C_YELLOW    "\033[33m"
#define C_BLUE      "\033[34m"
#define C_MAGENTA   "\033[35m"
#define C_CYAN      "\033[36m"
#define C_GRAY      "\033[37m"

int main()
{
    int sexo;
    float altura, peso, imc, ideal;
    printf(C_RED"------------------------------------\n");
    printf(C_GRAY"ola, tudo bem? vamos calcular o seu IMC\n");
    printf("O IMC serve para detectar se voce esta ou nao acima do peso\n");
    printf("digite o seu peso em kg\n");
    scanf("%f", &peso);
    printf("digite a sua altura e metros\n");
    scanf("%f", &altura);
    printf("qual o seu sexo?[0]mulher [1]homem\n");
    scanf("%f", &sexo);
    imc = peso / (altura * altura);
    ideal = altura * altura * 22;
    if(imc < 18.5){
        printf(C_YELLOW"voce esta abaixo do peso ideal! seu IMC eh de %.2f\n", imc);
        printf(C_RED"seu peso deveria estar em torno de %.2f\n", ideal);
    }else if(imc > 18.5 && imc<=24.9){
        printf(C_GREEN"voce esta com o peso ideal! seu IMC eh de %.2f\n", imc);
    }else if(imc > 24.9 && imc<=29.9){
        printf(C_YELLOW"voce esta acima do seu peso ideal, tome cuidado seu IMC eh de %.2f\n", imc);
        printf(C_RED"seu peso deveria estar em torno de %.2f\n", ideal);
    }else if(imc > 30){
        printf(C_YELLOW"voce esta obeso, tome MUITO cuidado, seu IMC eh de %.2f\n", imc);
        printf(C_RED"seu peso deveria estar em torno de %.2f\n", ideal);


    };

    printf(C_GRAY"TCHAU THACU");

    return 0;
}
