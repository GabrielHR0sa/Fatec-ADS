#include<stdio.h>

int main(){
    int vet_num[10], aux;

    printf("Informe 10 numeros:\n");

    for(int i=0; i<10; i++){
        scanf("%i%*c",&vet_num[i]);
    }

    for(int i=0; i<10; i++){
        for(int j=i; j<10; j++){
            if(vet_num[i] < vet_num[j]){
                aux=vet_num[i];
                vet_num[i] = vet_num[j];
                vet_num[j] = aux;
            }
        }
    }

        printf("Decrescente");
        for(int i=0; i<10; i++){
            printf("\n%i",vet_num[i]);
        }

getchar();
return 0;
}
