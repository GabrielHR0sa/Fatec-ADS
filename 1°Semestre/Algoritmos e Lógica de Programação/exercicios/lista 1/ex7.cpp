#include<stdio.h>

int main()
{

int salario, gratificacao, imposto;
    printf("Digite o valor do salario: ");
    scanf("%d%*c",&salario);

    gratificacao = (salario+50);

    imposto = (gratificacao - (salario/100*10));

    printf("\nO valor final do salario : %d", imposto);

    getchar();
    return 0;


}
/*Programa que recebeum salario, acrescenta R$50
e tira 10% de imposto do salario base*/
