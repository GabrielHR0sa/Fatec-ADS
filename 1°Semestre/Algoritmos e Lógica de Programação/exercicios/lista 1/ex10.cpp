#include<stdio.h>

int main()
{

float raio, area, pi;

    printf("Digite o raio do circulo: ");
    scanf("%f%*c",&raio);
    pi = 3.14;
    area = pi*(raio*raio);

    printf("\nA area do circulo eh: %.2f",area);

    getchar();
    return 0;

}
/*Programa que calcula a area de um circulo*/
