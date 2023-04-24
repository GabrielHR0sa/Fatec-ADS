#include<stdio.h>
#include<string.h>

typedef struct p{
        int codigo;
        char nome[30];
    }/*pessoa1, pessoa2*/;// variavel q possui os atributos internos do struct

int main(){
    //setlocale(LC_ALL, "Portuguese");
int n, j = 0;


    printf("Digite o numero de pessoas: ");//inserção do tamanho pelo usuario
    printf("\n(No minimo 1 e no maximo 10 \n");
    scanf("%d", &n);

    while((n < 1)||(n > 10)){
        printf("Numero nao permitido");
        printf("\nDigite o numero de pessoas: ");
        printf("\n(No minimo 1 e no maximo 10) \n");
        scanf("%d", &n);
    }
    if((n > 0)&&(n <= 10)){

    p pessoa[n];

    for(int i = 0; i < n; i++){
        printf("Digite o codigo da pessoa %d: ", i+1);
        scanf("%d", &pessoa[i].codigo);
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", &pessoa[i].nome);
    }

    for(int i = 0; i < n; i++){
        printf("\nCodigo da pessoa %d : %d", i+1, pessoa[i].codigo);
        printf("\nNome da pessoa %d : %s", i+1, pessoa[i].nome);
        printf("\n----------------------------------");
    }

    }


      return 0;
}
