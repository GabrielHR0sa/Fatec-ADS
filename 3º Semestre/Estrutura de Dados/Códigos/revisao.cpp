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
&a -> exibe o endereço de memória da variável ex: 020H
valor do ponteiro é o endereço de memória de outra variável
int *b; -> criação de ponteiro
b = &a -> aponta para o endereço de a
*b -> aponta para o valor do endereço de memória apontado

int *ponteiro
ponteiro = (int*) malloc(sizeof(int); -> separa um endereço de memória para o ponteiro no tamanho da variável (int)

struct tamanho -> 2 bytes
int tamanho -> 4 bytes

ponteiro = (int*) malloc(sizeof(int) -> quando o valor separado não é encontrado, retorna NULL
                         -----------------------------------------------------
*/

    aluno *topo = NULL, *aux;

    //alocando espaço na memoria e guardando dados do usuário

    aux = (aluno*) malloc(sizeof(aluno));
    printf("Digite o RA do aluno: ");
    scanf("%d", &aux->ra);
    printf("Digite o Nome do aluno: ");
    scanf("%s", &aux->nome);


return 0;
}
