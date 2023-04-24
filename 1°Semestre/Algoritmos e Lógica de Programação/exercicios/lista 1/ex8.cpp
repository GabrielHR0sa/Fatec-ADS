#include<stdio.h>

int main()
{

int deposito, juros, rendimento, total;
    printf("Digite o valor a ser depositado: ");
    scanf("%d%*c",&deposito);
    printf("\nDigite o valor dos juros: ");
    scanf("%d%*c",&juros);

    rendimento = (deposito/100*juros);

    printf("\nO valor do rendimento e de: %d", rendimento);

    total = (deposito+ (deposito/100*juros));
    printf("\nO valor final e de: %d",total);

    getchar();
    return 0;

}
/*Programa que recebe um deposito, a taxa de juros
e o valor total com os rendimentos*/
