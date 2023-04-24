/*fazer um programa que leia uma matriz de l linhas e c colunas e calcule: a) soma dos elementos da diagonal secundária
o produto das laterais (sem contar os numeros do centro), e a media aritmetica dos elementos multiplos de 3 e 5

*/

#include<stdio.h>

int main(){

int mat[100][100];
int i, j, l, c, p;
int soma;

    printf("\n Entre com o numero de linhas: ");
    scanf("%d",& l);
    printf("\n Entre com o numero de colunas: ");
    scanf("%d",& c);

    for(i = 0; i < l; i++){
    for(j = 0; j < c; j++){
        printf("\n [%d][%d] = ", i, j);
        scanf("%d*%c",& mat[i][j]);
    }
}

soma = 0;

    if(l == c){
   soma = 0;
   /*for(i = 0; i < l; i++){
    soma = soma + mat[i][l - 1 - i];        outra forma de resolver
   }*/
   for(i = 0; i < l; i++){
    for(j = 0; j < c; j++){
        if((i + j) == (l - 1)){
            soma = soma + mat[i][j];
        }
    }
    }

    printf("\n A soma da diagonal sec = %d", soma);
    }else{
        printf("\n Não possui diagonal, portanto impossível calcular a soma");
    }


return 0;
}
