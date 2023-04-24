#include<stdio.h>

int main()
{

int n1, n2, n3, media;
    printf("Digite as 3 notas: ");
    scanf("%d%*c",&n1);
    scanf("%d%*c",&n2);
    scanf("%d%*c",&n3);

    media = (n1+n2+n3)/3;

    printf("\nA media aritmetica dos numeros eh: %d", media);

    getchar();
    return 0;

}
/*Programa que recebe 3 notas e calcula a media aritmetica*/

