#include<stdio.h>
#include<math.h>
int main()
{
float n1, n2, calculo;
    printf("Digite O primeiro valor: ");
    scanf("%f%*c",&n1);
    printf("\nDigite o segundo valor: ");
    scanf("%f%*c",&n2);

    calculo = pow(n1,n2);

    printf("\nO resultado de n1 elevado a n2 eh: %.2f", calculo);

getchar();
return 0;
}
