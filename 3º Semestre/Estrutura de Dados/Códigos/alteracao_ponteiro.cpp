#include<stdio.h>
#include<stdlib.h>
int alterarvalor(int **b){

    printf("&b: %x\n", &b);
    printf("b: %x\n", *b);
    printf("**b: %x\n", **b);
    **b *= 2;
}

int main(){

//int a = 10;
//int *p = &a;
int *p = (int*)malloc(sizeof(int));

//printf("Endereco de A: %x\n", &a);

printf("Endereco de P: (&p) %x\n", &p);
printf("P apronta para: (p) %x\n", p);
//printf("valor da variavel A: %d\n Chamando a funcao!!!\n\n\n", a);

printf("valor da variavel P: %d\n Chamando a funcao!!!\n\n\n", *p);
alterarvalor(&p);
printf("\n\n---------------\nNovo valor armazenado em p depois da funcao: %d\n", *p);



}
/*
int a = 10;
int *p = &a;
int **pp = &p;


variavel   | a       |      |  *p       |      |  **pp      |
endereço   |033h     |      | 020a      |      | 105b       |
valor      | [10]    |      | [033h]    |      | [020a]     |
exibição   | &a=033h |      | &p = 020a |      | &pp = 105b |
                            | p = 033h  |      | pp = 020a  |
                            | *p = 10   |      | *pp = 033h |
                                               | **pp = 10  |
*/
