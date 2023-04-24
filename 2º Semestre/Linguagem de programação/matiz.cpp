/*fazer um programa na linguagem c que leia os dados de uma matriz lxc e calcule

soma dos elementos
produto da diagonal principal
porcentagem de elementos  > 0
menor elemento multiplo de 3

*/

#include<stdio.h>
int main(){


int i, j, c, l, k;
int mat[100][100];
int soma, produto, menor;
int qmaiorzero, pct;

printf("Entre com o numero de linhas: ");
scanf("%d*%c",&l);
printf("Entre com o numero de colunas: ");
scanf("%d*%c",&c);

for(i = 0; i < l; i++){
    for(j = 0; j < c; j++){
        printf("\n [%d][%d] = ", i, j);
        scanf("%d*%c",& mat[i][j]);
    }
}
    soma = 0;

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            soma = soma + mat[i][j];
        }
    }
    printf("\n A soma dos elementos = %d", soma);

    if(l == c){
        produto = 1;

        for(i =0; i < l; i++){
            for(j = 0; j < c; j++){
                if(i == j){
                    produto = produto * mat[i][j];

                }
            }
        }
        printf("\n O produto dos P = %d", produto);

    }else{
     printf("\n Matriz não é quadrada, portanto nao temos produto");
     }

     for(i =0; i < l; i++){
            for(j = 0; j < c; j++){
                if(mat[i][j] > 0){

                    qmaiorzero++;
                }
            }
     }
     printf("\n Porcentagem de numeros maiores que 0 = %2f%%", 100.0 * qmaiorzero / (l*c));

     k = 0;
    for(i =0; i < l; i++){
            for(j = 0; j < c; j++){
                if(mat[i][j]%3 == 0 ){
                    if(k == 0){
                        menor = mat[i][j];
                        k++;
                    }else if( menor > mat[i][j]){
                        menor = mat[i][j];
                    }
                }
            }
     }
     printf("\n Menor elemento multiplo de 3 = %d", menor);





return 0;
}
