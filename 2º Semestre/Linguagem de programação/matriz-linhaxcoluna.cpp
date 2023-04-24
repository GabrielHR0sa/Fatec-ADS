/*fazer um programa matriz composto por n armazens (linhas) e n produtos(colunas) e após cadastrar todas as toneladas em cada tupla, armazem produto, calcular
a) quantidade total de cada um dos produtos.
b)quantidade total de cada um dos armazens.
calcular e imprimir.
*/

#include<stdio.h>
#include<conio.h>

void leituraMatriz(int a[100][100], int linha, int coluna);
void calculoA(int a[100][100], int linha, int coluna, int v[100]);
void calculoB(int a[100][100], int linha, int coluna, int v[100]);
void impressaoVetor(int v[100], int n);

int main(){

int matriz[100][100], l, c, vetor[100];

    printf("\n Entre com o numero de linhas:  ");
    scanf("%d",& l);
     printf("\n Entre com o numero de colunas:  ");
    scanf("%d",& c);

    leituraMatriz(matriz, l, c);

    calculoA(matriz, c, l, vetor);

    printf("\n Total de cada um dos produtos");
    impressaoVetor(vetor, c);

    calculoB(matriz, l, c, vetor);

    printf("\n Total de cada um dos armazens");
    impressaoVetor(vetor, l);



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
    for(j = 0; j < linha; j++){
        v[j] = 0;
        for(i = 0; i < coluna; i++){
            v[j] = v[j] + a[i][j];
        }
    }
}

void calculoB(int a[100][100], int linha, int coluna, int v[100]){
    int i, j;
    for(i = 0; i < linha; i++){
        v[i] = 0;
        for(j = 0; j < coluna; j++){
            v[i] = v[i] + a[i][j];
        }
    }
}

void impressaoVetor(int v[100], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("\n [%d] = %d", i, v[i]);
    }
}


