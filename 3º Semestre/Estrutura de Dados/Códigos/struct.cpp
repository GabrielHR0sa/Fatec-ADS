#include<stdio.h>

struct p{
        int codigo;
        char nome[30];
    }/*pessoa1, pessoa2*/;// variavel q possui os atributos internos do struct

int main(){
    //setlocale(LC_ALL, "Portuguese");

    struct p pessoa1;

    printf("Digite o codigo da pessoa 1: ");
    scanf("%d", &pessoa1.codigo);
    printf("Digite o nome da pessoa 1: ");
    scanf("%s", &pessoa1.nome);

    //"%x" , &variavel => retorna o endereço de memoria em hexadecimal (4bytes)

        printf("\nCodigo da pessoa 1 (endereco da memoria): %x", &pessoa1.codigo);
        printf("\nNome da pessoa 1 (endereco da memoria): %x", &pessoa1.nome);
        printf("\nCodigo da pessoa 1 (variavel): %d", pessoa1.codigo);
        printf("\nNome da pessoa 1 (variavel): %s", pessoa1.nome);
        printf("\n SizeOf pessoa 1: %d", sizeof(pessoa1));




      return 0;
}
