#include<stdio.h>

int main()

{

int salario, aumento;

    printf("Digite o salario: ");
    scanf("%d%*c",&salario);

    aumento = (salario + (salario/100*25));
    printf("\nO resultado do aumento eh: %d", aumento);

    getchar();
    return 0;
}
/*Programa que aumenta 25% do salario*/
