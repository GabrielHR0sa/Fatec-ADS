#include<stdio.h>
#include<math.h>
int main()
{

float num, polegada, jarda, milha;

    printf("Digite a medida em p�s a ser convertida:");
    scanf("%f%*c",&num);

    polegada = num*12;
    jarda = num/3;
   // milha = (num/3)/1.760;

    printf("\nEm Polegadas: %.2f",polegada);
    printf("\nEm Jarda: %.2f", jarda);
   // printf("\nEm Milha: %.2f"), milha;

getchar();
return 0;
}
/*  p� = 12 polegadas
    1 jarda = 3 p�s
    1 milha = 1,760 jarda*/
