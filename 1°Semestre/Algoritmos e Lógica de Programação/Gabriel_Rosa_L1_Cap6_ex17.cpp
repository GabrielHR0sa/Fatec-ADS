#include<stdio.h>

int main(){
    int vet[6], soma_par=0, impar=0;

    printf("Informe 6 valores:");
    for(int i=0; i<6; i++){
        scanf("%i",&vet[i]);


    }

    printf("\nRELATORIO");

    printf("\nOs Numeros pares sao:");
    for(int i=0; i<6; i++){
        if(vet[i] % 2 == 0){
            printf("\nNumero: %i -----  posicao: %i",vet[i],i);
            soma_par += vet[i];
        }
    }
    printf("\nSoma dos pares: %i",soma_par);

    printf("\n\nOs numeros impares sao:");
    for(int i=0; i<6; i++){
        if(vet[i] % 2 != 0){
            printf("\nNumero: %i ----- posicao:%i",vet[i],i);
            impar++;
        }
    }

    printf("\nQuantidade de impares: %i",impar);

getchar();
return 0;
}
