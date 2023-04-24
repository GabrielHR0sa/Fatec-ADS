/*. sem tipo definido
    void não retorna valor

    . com tipo definido
        retorna o tipo definido
        return
*/

#include<stdio.h>
void leitura(int mat[100][100], int l, int c);
int soma_diagonal_sec(int mat[100][100], int l, int c);
int produto_laterais(int mat[100][100], int l, int c);
void ma_multplo3e5(int mat[100][100], int l, int c);

int main(){

int a[100][100];
int l, c, s, p;
float ma;

    printf("\n Entre com o n de linhas: ");
    scanf("%d",& l);
     printf("\n Entre com o n de colunas: ");
    scanf("%d",& c);

    leitura(a,l,c);


    if(l == c){
        s = soma_diagonal_sec(a,l,c);
        printf("\n A soma diagonal secundaria = %d", s);
    }else{
        printf("\n Não eh possivel realizar o calculo");
    }

    p = produto_laterais(a, l, c);
    printf("\n O produto das laterais = %d", p);

    ma_multplo3e5(a, l, c);

    return 0;
}
//-----------------------------------------------------------
void leitura(int mat[100][100], int l, int c){
    int i, j;

    for(i = 0; i < l; i++){
         for(j = 0; j < c; j++){
            printf("\n [%d][%d] = ", i, j);
            scanf("%d*%c",& mat[i][j]);
         }
    }

}
//-----------------------------------------------------------
int soma_diagonal_sec(int mat[100][100], int l, int c){
    int i, j, soma;
    soma = 0;

    for(i = 0; i < l; i++){
        soma = soma + mat[i][l - 1 - i];
    }
    return soma;
}
//--------------------------------------------------------------
int produto_laterais(int mat[100][100], int l, int c){
    int i, j, prod;
    prod = 1;

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            if((i == 0)||(j == 0)||(i == l-1)||(j == c-1)){
                prod = prod * mat[i][j];

            }
        }
    }

return prod;
}
//-------------------------------------------------------------
void ma_multplo3e5(int mat[100][100], int l, int c){
    int i, j, k;
    float ma;
    k = 0;

     for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
                if((mat[i][j] % 3 == 0)&&(mat[i][j] % 5 == 0)){
                    ma = ma + mat[i][j];
                    k++;
                }
        }
     }

     if(k != 0){
        printf("\n Ma = %2f", ma/k);
     }else{
        printf("\n Não tem multiplo de 3 e 5");
     }
}


