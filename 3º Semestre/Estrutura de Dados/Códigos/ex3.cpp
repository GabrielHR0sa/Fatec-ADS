#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//Realize o exercício anterior, mas ao invés de utilizar um array,
// crie um ponteiro e crie um vetor com ponteiros.

int main(){

int *p;
int qtd, i;
int troca, aux;
int contador = 0;

int len = sizeof(p)/sizeof(p[0]);

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &qtd);

p = (int*) malloc(qtd * sizeof(int)); // separa um local da memoria para armazenar os valores digitados

    for(i = 0; i < qtd; i++){   // recebe os valores do array
        printf("Digite o dado da posicao %d: ", i);
        scanf("%d", &p[i]);
    }

    printf("\nVetor Sem Ordenacao: \n");

    for(i = 0; i < qtd; i++){   // exibe os valores informados pelo usuário no espaço de memória separado;
        printf("posicao [%x] - P[%d] = %d\n",&p[i], i, p[i]);
    }


    for(i = 0; i < qtd; i++){   //ordenação dos valores do vetor
        do{
        troca = 0;
        for(i = 0; i < qtd; i++){
            if(p[i] > p[i+1]){
                aux = p[i];
                p[i] = p[i+1];
                p[i+1] = aux;
                troca = 1;
            }
        }
    }while(troca);

    printf("\nVetor ordenado: \n");
    for(i = 0; i < qtd; i++){
    printf("posicao [%x] - P[%d] = %d\n",&p[i], i, p[i]);
    }
  }

return 0;
}
