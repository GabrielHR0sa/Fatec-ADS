#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typdef struct aluno{
    int ra;
    char nome[30];
    aluno*prox;
}

int main(){

/*
int a;
&a -> exibe o endere�o de mem�ria da vari�vel ex: 020H
valor do ponteiro � o endere�o de mem�ria de outra vari�vel
int *b; -> cria��o de ponteiro
b = &a -> aponta para o endere�o de a
*b -> aponta para o valor do endere�o de mem�ria apontado

int *ponteiro
ponteiro = (int*) malloc(sizeof(int); -> separa um endere�o de mem�ria para o ponteiro no tamanho da vari�vel (int)

struct tamanho -> 2 bytes
int tamanho -> 4 bytes

ponteiro = (int*) malloc(sizeof(int) -> quando o valor separado n�o � encontrado, retorna NULL
                         -----------------------------------------------------
*/

    aluno *topo = NULL, *aux;

    //alocando espa�o na memoria e guardando dados do usu�rio

    aux = (aluno*) malloc(sizeof(aluno));
    printf("Digite o RA do aluno: ");
    scanf("%d", &aux->ra);
    printf("Digite o Nome do aluno: ");
    scanf("%s", &aux->nome);


return 0;
}
