#include<stdio.h>
#include<math.h>
int main()
{

int ano_nasc, ano_atual,idade, ano_f;

    printf("Digite o ano de nascimento: ");
    scanf("%d%*c",&ano_nasc);
    printf("\nDigite o ano atual: ");
    scanf("%d%*c",&ano_atual);

    idade = (ano_atual - ano_nasc);

    ano_f = (2050 - ano_nasc);

    printf("\nSua idade eh: %d", idade);
    printf("\nSua idade em 2050 sera: %d",ano_f);
getchar();
return 0;
}

