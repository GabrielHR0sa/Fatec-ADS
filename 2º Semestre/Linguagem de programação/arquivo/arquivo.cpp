/*
Arquivos
Modo Binário
FILE, NULL - sempre maiúsculo

FILE *fptr; - ponteiro de ligação

função fopen - abre o arquivo--------------------------------

                    nome              modo
if ((fptr = fopen ("Funcionario.bi" , "rb+")) == NULL){
    if((fptr = fopen("Funcionario.bi" , "wb")) == NULL){
        exit(1);
    }
}
--------------------------------------------------------------
função fclose - fexa o arquivo-------------------------------

sitaxe: fclose(ponteiro);
        fclose(fptr);

---------------------------------------------------------------
função fseek - posicionar no arquivo----------------------------

sintaxe: fseek(ponteiro, tamanho, modo);
         fseek(fptr, 0, 0);

modo - 0 - a partir do início
       1 - a partir da posição corrente do ponteiro
       2 - final

         fseek(fptr, 0, 0);
         fseek(fptr, sizeof(f), 0);
         fseek(fptr, 2*sizeof(f), 1);
         fseek(fptr, 2*sizeof(f), 0);
         fseek(fptr, 0, 2);

-----------------------------------------------------------------
função ftell - conta a quantidade de bytes do início do arquivo até a posição corrente

fseek(fptr, 0, 2);
n = ftell(fptr)/sizeof(F);
        250/50 = 5 registros;

------------------------------------------------------------------
função fread - ler o registro (dentro do arquivo)----------------

sintaxe: fread(&variavel, tamanho variavel, quantidade, ponteiro);
         fread(&f, sizeof(f), 1, fptr);

-------------------------------------------------------------------
função fwrite - escrever no arquivo (registro)---------------------

sintaxe: fwrite(&variavel, tamanho variavel, quantidade, ponteiro);
         fwrite(&f, sizeof(f), 1, fptr);

--------------------------------------------------------------------
Modo:

wb -> escrever no arquivo. Cria o arquivo, ou seja, se o arquivo existir ele apaga o seu conteudo.
rb -> Permite ler o  arquivo.
rb+ -> Permite leitura e escrita, mas o arquivo deve existir.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void cadastro();
void consulta();
void alteracao();
void exclusao_logica();
struct funcinario{
    char nome[38];
    int codigo;
    float salario;
    int e;
}f;

FILE * fptr;

int main(){

char op;

    do{

        printf("\n 1 - Cadastro");
        printf("\n 2 - Consulta");
        printf("\n 3 - Alteracao");
        printf("\n 4 - Exclusao logica");
        printf("\n 5 - Exclusao fisica");
        printf("\n 6 - Ordenacao");
        printf("\n 7 - Busca Binaria");
        printf("\n 9 - Sair");
        //scanf("%c",&op);
        op = getche();
        switch(op){
        case '1': cadastro();
              break;
        case '2': consulta();
              break;
        case '3': alteracao();
              break;
               case '4': exclusao_logica();
              break;
        case '9': printf("\n Saindo...");
              break;
        default: printf("\n Opcao %c invalida", op);

        }

    }while(op != '9');


return 0;
}

void cadastro(){
    if((fptr = fopen("funcionario.bi" , "rb+")) == NULL){
        if((fptr = fopen("funcionario.bi" , "wb")) == NULL){
            printf("\n Erro");
            exit(1);
        }
    }
    fseek(fptr, 0, 0);

    printf("\n Nome: ");
    setbuf(stdin, NULL);
    scanf("%[^\n]", f.nome);
    printf("\n Codigo: ");
    scanf("%d",& f.codigo);
    printf("\n Salario: ");
    scanf("%f",& f.salario);
    f.e = 0;

    fseek(fptr, 0, 2);
    fwrite(&f, sizeof(f), 1, fptr);
    fclose(fptr);
}

void consulta(){
    if((fptr = fopen("funcionario.bi" , "rb")) == NULL){
        printf("\n ERRO");
        exit(1);
    }
    fseek(fptr, 0, 0);
    while(fread(&f, sizeof(f), 1, fptr)){
        if(f.e == 0){
                setbuf(stdin, NULL);
            printf("\n Nome: %s", f.nome);
            printf("\n Codigo: %d", f.codigo);
            printf("\n Salario: %f", f.salario);
        }
    }
    getche;
    fclose(fptr);

}

void alteracao(){
    char aux[38];

      if((fptr = fopen("funcionario.bi" , "rb+")) == NULL){
        printf("\n ERRO");
        exit(1);
    }

    printf("\n Entre com o nome do funcionario a ser encontrado");
    setbuf(stdin, NULL);
    scanf("%[^\n]", aux);
    fseek(fptr, 0, 0);

    while(fread(&f, sizeof(f), 1, fptr)){
        if(f.e == 0){
            if (strcmp(f.nome, aux) == 0){
                printf("\n Entre com o novo salario: ");
                scanf("%f", &f.salario);
                fseek(fptr, ftell(fptr) - sizeof(f), 0);
                fwrite(&f, sizeof(f), 1, fptr);
                fseek(fptr , 0, 2);
            }
        }
    }
    fclose(fptr);
}

void exclusao_logica(){
    char aux[38];

      if((fptr = fopen("funcionario.bi" , "rb+")) == NULL){
        printf("\n ERRO");
        exit(1);
    }

    printf("\n Entre com o nome do funcionario a ser encontrado");
    setbuf(stdin, NULL);
    scanf("%[^\n]", aux);
    fseek(fptr, 0, 0);

    while(fread(&f, sizeof(f), 1, fptr)){
        if(f.e == 0){
            if (strcmp(f.nome, aux) == 0){
                f.e = 1;
                fseek(fptr, ftell(fptr) - sizeof(f), 0);
                fwrite(&f, sizeof(f), 1, fptr);
                fseek(fptr , 0, 2);
            }
        }
    }
    fclose(fptr);
}
