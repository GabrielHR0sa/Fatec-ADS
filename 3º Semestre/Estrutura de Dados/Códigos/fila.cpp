#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct aluno{
    int ra;
    aluno *prox;

};

int main(){
    aluno *ini = NULL, *fim = NULL,*aux;
    int op;

  do{
    printf("Digite a opcao: [1] - Adicionar | [2] - Listar | [3] - Remover | [4] - Limpar | [5] - Sair\n");
    scanf("%d", &op);

switch(op){
    case 1://INSERIR
        aux = (aluno*) malloc(sizeof(aluno));
            printf("Digite o Ra do aluno: ");
            scanf("%d", &aux->ra);

            aux->prox = NULL;

        if(ini == NULL){
            ini = aux;

        }else{
            fim->prox = aux;
        }
        fim = aux;   //passa o fim para o proximo elemento, pega a referência e muda

    break;
    case 2://LISTAR
        if(ini == NULL){//verifica se existem elementos
                printf("\nNada a ser listado\n");
            }else{
                aux = ini;
                while(aux != NULL){
                printf("\n----------------------\n");
                printf("%d\n", aux->ra);
                printf("\n----------------------\n");
                aux = aux->prox;//posiciona aux no proximo
                }
            }
    break;
    case 3://REMOVER
        if(ini == NULL){
            printf("Não existem elementos na fila\n");
        }else if(ini == fim){
            free(ini);
            ini = NULL;
            fim = NULL;
        }else{
            aux = ini;
            ini = ini->prox;
            free(aux);
        }
    break;
    case 4://LIMPAR

        if(ini == NULL){
            printf("Não existem elementos na fila\n");
        }else if(ini == fim){
            free(ini);
            ini = NULL;
            fim = NULL;
        }else{
            while(ini != NULL){
            aux = ini;
            ini = ini->prox;
            free (aux);
        }
        fim = NULL;
        }
    break;
    case 5:
        if(ini != NULL){
            printf("Não existem elementos na fila\n");
        }else if(ini == fim){
            free(ini);
            ini = NULL;
            fim = NULL;
        }else{
            while(ini != NULL){
            aux = ini;
            ini = ini->prox;
            free (aux);
        }
        fim = NULL;
        }

        printf("\nSaindo so sistema...\n");
    break;

}


}while(op != 5);
return 0;
}
