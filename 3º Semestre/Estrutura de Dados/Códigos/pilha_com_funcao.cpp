#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct aluno{
        int ra;
        char nome [30];
        aluno *prox;

    };

void adicionar(aluno **t){

     aluno *novo = (aluno*) malloc(sizeof(aluno));
            printf("Digite o RA do aluno: ");
            scanf("%d", &novo->ra);
            printf("Digite o Nome do aluno: ");
            scanf("%s", &novo->nome);
            novo->prox = *t;
            *t = novo;

}

void listar(aluno **t){
    aluno*topo = NULL, *aux;

     if(*t == NULL){//verifica se existem elementos
                printf("\nNada a ser listado\n");
            }else{
                aux = *t;//posiciona o auxiliar no topo
                while(aux != NULL){
                printf("\n----------------------\n");
                printf("%d\n", aux->ra);
                printf("%s\n", aux->nome);
                printf("\n----------------------\n");
                aux = aux->prox;//posiciona aux no proximo
                }
            }

}

void remover(aluno **t){
    aluno*topo = NULL, *aux;

    if(*t == NULL){
                printf("\nNada a ser apagado\n");
            }else{
                    aux = *t;
                    *t = aux -> prox;
                    free(aux);//apagar

            }

}

void limpar(aluno **t){
    aluno*topo = NULL, *aux;
    aluno *prox;

    if(*t == NULL){
                printf("\nNada a ser apagado\n");
            }else{
                while(*t != NULL){
                    aux = *t;
                    *t = aux->prox;
                    free(aux);//apagar
                }
            }
}

int main(){

     aluno*topo = NULL, *aux;
     int op;

     do{
            printf("Digite a opcao: [1] - Adicionar | [2] - Listar | [3] - Remover | [4] - Limpar | [5] - Sair\n");
            scanf("%d", &op);

             switch(op){
         case 1:
             //usuario seleciona adicionar
                adicionar(&topo); //chama a função que executa o código, passando o parametro &topo
            break;
         case 2:
            //usuario seleciona listar
                listar(&topo);
            break;
        case 3:
            //usuario seleciona remover
                remover(&topo);
            break;
        case 4:
            //usuario seleciona limpar
                limpar(&topo);
            break;
        case 5:
            printf("\n\nSaindo do sistema...\n");
            break;
             }

     }while(op != 5);
return 0;
}
