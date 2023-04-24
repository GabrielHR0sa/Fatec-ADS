#include<stdio.h>

int main()
{

float altura, base, area;

    printf("Digite a base do triangulo: ");
    scanf("%f%*c",&base);
    printf("\nDigite a altura do triangulo: ");
    scanf("%f%*c",&altura);

    area = (base*altura)/2;

    printf("\nA area do triangulo eh: %.f", area);

    getchar();
    return 0;
}
/*Programa que calcula a area do triangulo*/
