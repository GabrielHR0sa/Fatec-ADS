#include<stdio.h>
#include<math.h>
int main()
{

float preco_fb, lucro, imposto, valor_l, valor_i, total;

    printf("Digite o preço de fabrica: ");
    scanf("%f%*c",&preco_fb);
    printf("\nDigite o percentual do lucro: ");
    scanf("%f%*c",&lucro);
    printf("\nDigite o percentual dos impostos: ");
    scanf("%f%*c",&imposto);

    valor_l = (preco_fb/100*lucro);
    valor_i = (preco_fb/100*imposto);
    total = (preco_fb + valor_i + valor_l);

    printf("\nO valor do lucro do distribuidor e de: %.2f", valor_l);
    printf("\nO valor dos impostos e de: %.2f", valor_i);
    printf("\nO valor total do veiculo eh: %.2f", total);

getchar();
return 0;
}

