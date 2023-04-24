
#include<stdio.h>
#include<conio.h>

void leituraMatriz(int a[100][100], int linha, int coluna);
void calculoA(int a[100][100], int linha, int coluna, int v[100]);


int main(){

int matriz[100][100], l, c, vetor[100];

    printf("\n Entre com o numero de linhas:  ");
    scanf("%d",& l);
     printf("\n Entre com o numero de colunas:  ");
    scanf("%d",& c);

    leituraMatriz(matriz, l, c);

    calculoA(matriz, c, l, vetor);

return 0;
}

void leituraMatriz(int a[100][100], int linha, int coluna){
    int i, j;

    for(i = 0; i< linha; i++){
        for(j = 0; j< coluna; j++){
            printf("[%d][%d] = ", i, j);
            scanf("%d",& a[i][j]);
        }
    }
}

void calculoA(int a[100][100], int linha, int coluna, int v[100]){
    int i, j, n, k;

    if((linha * coluna) == n){
            k = 0;
        for(i = 0; i < linha; i++){
            for(j = 0; j <= coluna; j++){
                a[i][j] = v[k];
                printf("\n Matriz %d",a[i][j]);
            k++;
            }
        }
    }
}





