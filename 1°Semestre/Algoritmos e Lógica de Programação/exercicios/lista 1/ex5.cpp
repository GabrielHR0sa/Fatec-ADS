#include<stdio.h>

int main()

{

int salario, aumento, soma;

    printf("Digite o salario: ");
    scanf("%d%*c",&salario);
    printf("Digite o aumento: ");
    scanf("%d%*c",&aumento);

        soma = (salario + (salario/100*aumento));
        printf("\nO resultado eh: %d", soma);

        getchar();
        return 0 ;


    getchar();
    return 0;
}
/*Programa que recebe um salario um aumento e calcula o valor final*/
