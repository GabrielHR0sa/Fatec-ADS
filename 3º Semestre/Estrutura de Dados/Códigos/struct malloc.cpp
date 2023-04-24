#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct pessoa{
        int Cod;
        char Nome[30];

    };

int main(){

pessoa *p;


    printf("Tamanho de pessoa: %d\n", sizeof(pessoa));
    p = (pessoa*) malloc(sizeof(pessoa));

    printf("Endereco para onde P aponta: %x\n", p);

    printf("Digite o codigo:");
    scanf("%d", &p->Cod);
    printf("Digite o nome:");
    scanf("%s", p->Nome);

    printf("Codigo: %d\n", p->Cod);
    printf("Nome: %s\n", p->Nome);


return 0;
}
