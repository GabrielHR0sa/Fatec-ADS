#include <stdio.h>


int main(){

int n, qtpar, qtimpar, qtprimo, contprimo;
qtpar = 0;
qtimpar = 0;
qtprimo = 0;
contprimo = 0;


    printf("Digite um numero de 0 a 100: ");
    scanf("%d", &n);

    while((n > 0)&&(n < 100)){

        for(int i = 1; i <= n; i++){
            if(n % i == 0 ){

                qtprimo++;
            }
        }

        if(qtprimo == 2){
                printf("Numero Primo: %d \n", n);
            contprimo++;
        }


        if(n % 2 == 0){
                printf("Numero Par: %d \n", n);
                qtpar++;


        }else{
                printf("Numero Impar: %d \n", n);
                qtimpar++;
            }

        printf("\n----------------------------------------\n");


        printf("Digite um numero de 0 a 100: ");
        scanf("%d", &n);
    }

        printf("\nQuantidade De Numeros Pares: %d \n", qtpar);
        printf("Quantidade De Numeros Impares: %d \n", qtimpar);
        printf("Quantidade De Numeros Primos: %d \n", contprimo);

getchar();
return 0;
}
