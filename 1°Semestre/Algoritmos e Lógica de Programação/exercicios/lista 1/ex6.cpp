#include<stdio.h>

int main()
{

int salario, gratificacao, imposto;
    printf("Digite o valor do salario: ");
    scanf("%d%*c",&salario);

    gratificacao = (salario+(salario/100*5));

    imposto = (gratificacao - (salario/100*7));

    printf("\nO valor final do salario : %d", imposto);

    getchar();
    return 0;


}
/*Programa que recebe um salario, aumenta em 5% e tira
7% de imposto do salario base*/
