#include<stdio.h>

int main(){
int vet[10], contador=0;

printf("Informe 10 valores: ");
for(int i=0; i<10; i++){
    scanf("%i%*c",&vet[i]);
}

for(int i=0; i<10; i++){
    if(vet[i] > 50){
        printf("\nSuperiores de 50: %i ",vet[i]);
        printf("\nPosicao: %i",i);

        contador++;
    }

}
    if(contador == 0){
        printf("Nao existe nenhum numero maior que 50!");
    }


getchar();
return 0;
}
