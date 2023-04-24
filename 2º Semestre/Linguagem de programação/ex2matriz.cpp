/*armazenar os valores da matriz em um vetor e exibir a sequencia em linhas e depois a sequencia em colunas*/


#include<stdio.h>
#include<conio.h>

void leituraMatriz(int a[100][100], int linha, int coluna);
void calculoA(int a[100][100], int linha, int coluna, int v[100]);
void calculoB(int a[100][100], int linha, int coluna, int v[100]);

int main(){

int matriz[100][100], l, c, vetor[100];

    printf("\n Entre com o numero de linhas:  ");
    scanf("%d",& l);
     printf("\n Entre com o numero de colunas:  ");
    scanf("%d",& c);

    leituraMatriz(matriz, l, c);

    calculoA(matriz, c, l, vetor);

    printf("\n ---------------------------------");

    calculoB(matriz, l, c, vetor);





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
    int i, j;
    int k = 0;

    for(i = 0; i < linha; i++){
        for(j = 0; j <= coluna; j++){
            v[k] = a[i][j];
             printf("\n Sequencia das linhas %d",v[k]);

        }
    }
}

void calculoB(int a[100][100], int linha, int coluna, int v[100]){
    int i, j;
    int k = 0;

    for(j = 0; j < coluna; j++){
        for(i = 0; i < linha; i++){
            v[k] = a[i][j];
            printf("\n Sequencia das colunas %d",v[k]);
        }
    }

}




