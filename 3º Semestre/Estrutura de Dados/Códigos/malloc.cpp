#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(){

int *p;
int qtd, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &qtd);

p = (int*) malloc(qtd * sizeof(int)); // separa um local da memoria para armazenar os valores digitados

    for(i = 0; i < qtd; i++){   // recebe os valores do array
        printf("Digite o dado da posicao %d: ", i);
        scanf("%d", &p[i]);
    }

    for(i = 0; i < qtd; i++){   // exibe os valores informados pelo usuário no espaço de memória separado pela linha 14;
        printf("posicao [%x] - P[%d] = %d\n",&p[i], i, p[i]);
    }


return 0;
}
