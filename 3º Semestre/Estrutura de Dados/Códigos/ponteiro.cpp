#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main (){

int variavel = 10;
int variavel2 = 5;
int *p;

p = &variavel;

    printf("Valor variavel: %d\n", variavel);
    printf("Endereco variavel: %x\n", &variavel);
    printf("--------------------------\n");

    printf("Valor variavel 2: %d\n", variavel2);
    printf("Endereco variavel 2: %x\n", &variavel2);
    printf("--------------------------\n");

    printf("P esta em: %x\n", &p);  // exibe o endereco em que P esta
    printf("P = %x\n", p); // exibe a posicao do endereco da memoria
    printf("Conteudo em P = %d\n", *p); // exibe o valor dentro do endereço
    printf("--------------------------\n");

*p = 15;

    printf("\nVariavel 1 depois de trocado pelo ponteiro: %d\n",*p);
    printf("P aponta para: %x\n\n", p);

    printf("--------------------------\n");
    printf("\nTroca da direcao do ponteiro\n\n");
    printf("--------------------------\n");

p = &variavel2;

    printf("P esta em: %x\n", &p);
    printf("P = %x\n", p); // exibe a posicao do endereco da memoria
    printf("Conteudo em P = %d\n", *p); // exibe o valor dentro do endereço
    printf("--------------------------\n");


return 0;
}
