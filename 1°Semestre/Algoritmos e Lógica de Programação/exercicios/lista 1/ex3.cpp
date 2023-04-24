#include<stdio.h>

int main()

{

float n1, n2, n3, peso1, peso2, peso3, media;

    printf("Digite as 3 notas: ");
    scanf("%f%*c",&n1);
    scanf("%f%*c",&n2);
    scanf("%f%*c",&n3);
    printf("Digite seus respectivos pesos: ");
    scanf("%f%*c",&peso1);
    scanf("%f%*c",&peso2);
    scanf("%f%*c",&peso3);

    media = (n1*peso1+n2*peso2+n3*peso3)/(peso1+peso2+peso3);

    printf("\nO resultado da media ponderada eh: %.2f", media);

    getchar();
    return 0;
}
/*Programa que recebe 3 notas e seus pesos e faz a media ponderada*/
