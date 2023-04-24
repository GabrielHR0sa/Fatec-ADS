#include<stdio.h>
#include<string.h>

typedef struct p{
        int codigo;
        char nome[30];
    }/*pessoa1, pessoa2*/;// variavel q possui os atributos internos do struct

int main(){
    //setlocale(LC_ALL, "Portuguese");

    p pessoa[4];

    for(int i = 0; i < 4; i++){
        printf("Digite o codigo da pessoa %d: ", i+1);
        scanf("%d", &pessoa[i].codigo);
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", &pessoa[i].nome);
    }

    for(int i = 0; i < 4; i++){
        printf("\nCodigo da pessoa %d : %d", i+1, pessoa[i].codigo);
        printf("\nNome da pessoa %d : %s", i+1, pessoa[i].nome);
        printf("\n----------------------------------");
    }

      return 0;
}
