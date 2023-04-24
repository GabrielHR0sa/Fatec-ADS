#include<stdio.h>

int main(){
int vet[9], i, j, qt_divisor, numero_primo[9];

printf("Informe 9 numeros inteiros!");
for(i=0; i<9; i++){
    printf("\nInforme o valor da posicao %i do vetor: " ,i);
    scanf("%i%*c",&vet[i]);

}

printf("Informar numeros primos e a posicao do vetor");
for(i=0; i<9; i++){
    qt_divisor = 0;

    for(j = 1; j <= vet[i]; j++){
        if(vet[i]% j == 0){
            qt_divisor++;
        }
    }

    if(qt_divisor == 2){
            printf("\nposicao: %i - valor: %i ",i,vet[i]);
    }
}

getchar();
return 0;
}
