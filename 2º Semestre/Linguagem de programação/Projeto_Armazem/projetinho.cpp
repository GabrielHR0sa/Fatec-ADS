#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void cadastro();
void consulta();
void consulta_armazem();
void alteracao();
void exclusao_logica();
void exclusao_fisica();
void ordena_codigo_crescente();
int busca_binaria_codigo();
void recupera_backup();

struct armazem{
    char nome[39];
    char estado[20];
    int codigo;
    float Peso_total;
    int E;
}F;

FILE * fptr;

int main(){
    char op;

    do{
        printf("\n");
        printf("\n1_ Cadastro");
        printf("\n2_ Consulta");
        printf("\n3_ Consulta Armazens Rio ou Minas");
        printf("\n4_ Alteracao");
        printf("\n5_ Exclusao Logica");
        printf("\n6_ Exclusao Fisica");
        printf("\n7_ Ordenacao Pelo codigo ordem crescente");
        printf("\n8_ Busca Codigo");
         printf("\n9_ Recuperar backup de todos os armazens");
        printf("\ns_ Sair\n");
        //scanf("%c",&op);
        op= getche();

        switch (op){
            case '1': cadastro();
            break;

            case '2': consulta();
            break;

            case '3': consulta_armazem();
            break;

            case '4': alteracao();
            break;

            case '5': exclusao_logica();
            break;

            case '6': exclusao_fisica();
            break;

            case '7': ordena_codigo_crescente();
            break;

            case '8': busca_binaria_codigo();
            break;

            case '9': recupera_backup();
            break;

            case 's': printf("\nSaindo...");
            break;

            default : printf("\nOpcao %c invalida", op);

        }
    }while(op!= 's');


return 0;
}

void clear_screen()
{
        system("clear");
        system("cls");
}

void verify_archive_armazem()
{
    if((fptr = fopen("Armazem.bi", "rb+")) == NULL)
    {
        printf("O ARQUIVO ARMAZEM.BI NAO EXISTE!!! TENTANDO CRIA-LO AGORA...");
        if((fptr = fopen("Armazem.bi", "wb")) == NULL)
        {
            printf("\n\nERRO AO CRIAR ARQUIVO!");
            exit(1);
        }
    }
}

void cadastro(){
    if((fptr = fopen("Armazem.Bi","rb+")) == NULL)
    {
        if((fptr = fopen("Armazem.Bi","wb"))==NULL){
            printf("\nErro");
            exit(1);
        }
    }
    printf("\n Nome: ");
    setbuf(stdin, NULL);
    scanf("%[^\n]", F.nome);

    printf("\n Estado: ");
    setbuf(stdin, NULL);
    scanf("%[^\n]", F.estado);

    printf("\n Codigo: ");
    scanf("%d",&F.codigo);

    printf("\n Peso total dos produtos armazenados: ");
    scanf("%f",&F.Peso_total);

    F.E = 0;
    fseek(fptr, 0, 2);
    fwrite(&F, sizeof(F), 1, fptr);
    fclose(fptr);

}

void consulta(){
    if((fptr = fopen("Armazem.Bi","rb"))==NULL){
        printf("\nErro");
        exit(1);
    }
    fseek(fptr, 0, 0);
    while(fread(&F, sizeof(F), 1, fptr)){
        if(F.E == 0){
            printf("\n Nome: %s",F.nome);
            printf("\n Estado: %s",F.estado);
            printf("\n Codigo: %d", F.codigo);
            printf("\n Peso total dos produtos armazenados: %.2f", F.Peso_total);
        }

    }
    getch();
fclose(fptr);
}

void consulta_armazem(){
    char rio[20] = "Rio de Janeiro";
    char minas[20] = "Minas Gerais";
    int retorno;

    if((fptr = fopen("Armazem.Bi","rb+"))==NULL){
        printf("\nErro");
        exit(1);
    }
     while(fread(&F, sizeof(F), 1, fptr)){
        if(F.E == 0){
            if((strcmp(F.estado, rio) == 0) || (strcmp(F.estado, minas)) == 0){
                 printf("\n Nome: %s",F.nome);
            printf("\n Estado: %s",F.estado);
            printf("\n Codigo: %d", F.codigo);
            printf("\n Peso total dos produtos armazenados: %.2f", F.Peso_total);
        }
        }
    }
}


void alteracao(){
    char aux[38];
    if((fptr = fopen("Armazem.Bi","rb+"))==NULL){
        printf("\nErro");
        exit(1);
    }
    printf("\nEntre com o nome do armazem a ser alterado: ");
    setbuf(stdin, NULL);
    scanf("%[^\n]",aux);
    fseek(fptr, 0, 0);
    while(fread(&F, sizeof(F), 1, fptr)){
        if(F.E == 0){
            if(strcmp(F.nome, aux) == 0){
                printf("\nEntre com o novo peso dos produtos: ");
                scanf("%f",&F.Peso_total);
                fseek(fptr, ftell(fptr)-sizeof(F),0);
                fwrite(&F,sizeof(F), 1, fptr);
                fseek(fptr, 0, 2);
            }
        }
    }
}

void exclusao_logica(){
    char aux[38];
    if((fptr = fopen("Armazem.Bi","rb+"))==NULL){
        printf("\nErro");
        exit(1);
    }
    printf("\nEntre com o nome do armazem a ser encontrado: ");
    setbuf(stdin, NULL);
    scanf("%[^\n]",aux);
    fseek(fptr, 0, 0);
    while(fread(&F, sizeof(F), 1, fptr)){
        if(F.E == 0){
            if(strcmp(F.nome, aux) == 0){
                F.E = 1;
                fseek(fptr, ftell(fptr)-sizeof(F),0);
                fwrite(&F,sizeof(F), 1, fptr);
                fseek(fptr, 0, 2);
            }
        }
    }
}

void exclusao_fisica(){
    FILE * fptraux, * fptrback;

    //1
    if((fptr = fopen("Armazem.Bi","rb"))==NULL){
        printf("\nERRO");
        exit(1);
    }
    if((fptraux = fopen("auxiliar.Bi","wb"))==NULL){
        printf("\nERRO");
        exit(1);
    }
    if((fptrback = fopen("back.Bi","rb+"))==NULL){
        if((fptrback = fopen("back.Bi","wb"))==NULL){
            printf("\nERRO");
            exit(1);
        }
    }
    fseek(fptr, 0, 0);

    //2
    while(fread(&F, sizeof(F), 1, fptr)){
        if(F.E==0){
            fseek(fptraux, 0, 2);
            fwrite(&F, sizeof(F), 1,fptraux);
        }else{
            fseek(fptrback, 0, 2);
            fwrite(&F, sizeof(F), 1, fptrback);
        }
    }
    //3
    fclose(fptr);
    fclose(fptraux);
    fclose(fptrback);

    //4
    remove("Armazem.Bi");
    //5
    rename("auxiliar.Bi","Armazem.Bi");
}

void ordena_codigo_crescente(){
    int i, j, n;
    struct armazem Fi, Fj;

    if((fptr = fopen("Armazem.Bi","rb+"))==NULL){
        printf("\nERRO");
        exit(1);
    }
    fseek(fptr, 0, 2);
    n = ftell(fptr) / sizeof(F);

    for(i = 0; i<n; i++){
        for(j= i+1; j<n; j++){
            fseek(fptr, i*sizeof(Fi), 0);
            fread(&Fi, sizeof(Fi), 1, fptr);
            fseek(fptr, j*sizeof(F), 0);
            fread(&Fj, sizeof(F), 1, fptr);
            if(Fi.codigo > Fj.codigo){
                fseek(fptr, i*sizeof(F), 0);
                fwrite(&Fj, sizeof(F), 1, fptr);
                fseek(fptr, j*sizeof(F), 0);
                fwrite(&Fi,sizeof(F), 1, fptr);
            }
        }
    }

    fclose(fptr);
}

int busca_binaria_codigo(){
    int low, mid, high, n, elem;

    if((fptr = fopen("Armazem.Bi","rb"))==NULL){
        printf("\nERRO");
        exit(1);
    }
    printf("\nEntre com o elemento a ser encontrado: ");
    scanf("%d",&elem);
    fseek(fptr, 0, 2);
    n = ftell(fptr)/sizeof(F);

    low = 0;
    high = n-1;
    while(low < high){
        mid = (low + high)/2;
        fseek(fptr, mid*sizeof(F), 0);
        fread(&F, sizeof(F), 1, fptr);
        if(F.codigo > elem){
            high = mid-1;
        }else if(F.codigo < elem){
            low = mid+1;
        }else{
            fclose(fptr);
            return mid;
        }
    }
    fclose(fptr);
    return -1;
}

void recupera_backup(){


FILE * fptr_auxiliar, * fptr_backup;



   clear_screen();
    verify_archive_armazem();



   if((fptr_auxiliar = fopen("Auxiliar.bi", "wb")) == NULL)
    {
        printf("\n\nERRO AO CRIAR ARQUIVO AUXILIAR.BI!");
        exit(1);
    }



   if((fptr_backup = fopen("Backup.bi", "rb+")) == NULL)
    {
        printf("O ARQUIVO BACKUP.BI NAO EXISTE!!! TENTANDO CRIA-LO AGORA...");
        if((fptr_backup = fopen("Backup.bi", "wb")) == NULL)
        {
            printf("\n\nERRO AO CRIAR ARQUIVO BACKUP.BI!");
            exit(1);
        }
    }



   fseek(fptr_backup, 0, 0);



   while(fread(&F, sizeof(F), 1, fptr_backup))
    {

            fseek(fptr, 0, 2);
            fwrite(&F, sizeof(F), 1, fptr);
    }



   fclose(fptr);
    fclose(fptr_auxiliar);
    fclose(fptr_backup);



   remove("Backup.bi");
    rename("Auxiliar.bi", "Backup.bi");



   setbuf(stdin, NULL);
}


