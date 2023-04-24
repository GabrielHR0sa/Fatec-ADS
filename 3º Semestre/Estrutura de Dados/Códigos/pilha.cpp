#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct aluno{
        int ra;
        char nome [30];
        aluno *prox;

    };

int main(){

     aluno*topo = NULL, *aux;
     int op;

     do{
            printf("Digite a opcao: [1] - Adicionar | [2] - Listar | [3] - Remover | [4] - Limpar | [5] - Sair\n");
            scanf("%d", &op);

             switch(op){
         case 1:
             //usuario seleciona adicionar
            aux = (aluno*) malloc(sizeof(aluno));
            printf("Digite o RA do aluno: ");
            scanf("%d", &aux->ra);
            printf("Digite o Nome do aluno: ");
            scanf("%s", &aux->nome);


            aux->prox = topo;
            topo = aux;

            break;
         case 2:
            //usuario seleciona listar

            if(topo == NULL){//verifica se existem elementos
                printf("\nNada a ser listado\n");
            }else{
                aux = topo;//posiciona o auxiliar no topo
                while(aux != NULL){
                printf("\n----------------------\n");
                printf("%d\n", aux->ra);
                printf("%s\n", aux->nome);
                printf("\n----------------------\n");
                aux = aux->prox;//posiciona aux no proximo
                }
            }

            break;
        case 3:
            //usuario seleciona remover


            break;
        case 4:
            //usuario seleciona limpar

            if(topo == NULL){
                printf("\nNada a ser apagado\n");
            }else{
                while(topo != NULL){
                    aux = topo;
                    topo = topo->prox;
                    free(aux);//apagar
                }
            }
            break;
        case 5:
            printf("\n\nSaindo do sistema...\n");
            break;
             }

     }while(op != 5);







    /*aux = topo;
    while(aux != null){
        printf("%d", aux->ra);
        aux = aux->prox;
    }*/

return 0;
}
