#include<stdio.h>

/*int main()
{
int n[10];
int i;
                                    // for para preencher o vetor
    for(i=0;i<10;i++){

        printf("Digite o valor ");
        scanf("%d*c",& n[i]);

    }
    for(i=0;i<10;i++){              // for para exibir valores do vetor

        printf("%d \n", n[i]);

    }


 getchar ();
 return 0;
}*/
//----------------------------- MATRIZ ----------------------------
#include<stdio.h>
main ()
{

int matrizA [2][10];
int i,j;

        for(i=0;i<2;i++){
            for(j=0;j<10;j++){
                printf("\n digite o %d %d elemento da matriz: ", i, j);
                scanf("%d", &matrizA[i][j]);
            }
        }
            for(i=0;i<2;i++){
            for(j=0;j<10;j++){
                printf("\n O elemento da posicao %d %d eh: %d: ", i, j, matrizA[i][j]);

            }
        }
        return 0;
}
