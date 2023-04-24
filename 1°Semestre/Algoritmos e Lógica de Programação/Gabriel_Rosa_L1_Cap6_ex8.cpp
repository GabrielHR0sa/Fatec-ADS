#include<stdio.h>

int main(){

int vet_x[5], vet_y[5], vet_completo[10], aux;
    printf("Informe os valores para o vetor X:\n");
    for(int i=0; i<5; i++){
        scanf("%i%*c",&vet_x[i]);
    }

    printf("Informe os valores para o vetor Y:\n");
    for(int i=0; i<5; i++){
        scanf("%i%*c",&vet_y[i]);
    }

    for(int i=0; i<5; i++){
        for(int j=i; j<5; j++){
            if(vet_x[i] > vet_x[j]){
                aux=vet_x[i];
                vet_x[i] = vet_x[j];
                vet_x[j] = aux;
            }
        }
    }

    for(int i=0; i<5; i++){
        for(int j=i; j<5; j++){
            if(vet_y[i] > vet_y[j]){
                aux=vet_y[i];
                vet_y[i] = vet_y[j];
                vet_y[j] = aux;
            }
        }
    }

    printf("\nOrdenado X:");
    for(int i=0; i<5; i++){
        printf("%i",vet_x[i]);
    }
    printf("\nOrdenado Y:");
    for(int i=0; i<5; i++){
        printf("%i",vet_y[i]);
    }

    for(int i=0; i<5; i++){
        vet_completo[i]=vet_x[i];
        vet_completo[i+5] = vet_y[i];
    }

    for(int i=0; i<10; i++){
        for(int j=i; j<10; j++){
            if(vet_completo[i] > vet_completo[j]){
                aux=vet_completo[i];
                vet_completo[i] = vet_completo[j];
                vet_completo[j] = aux;
            }
        }
    }


    printf("\nRESULTADO: ");
    for(int i =0;i<10;i++){
        printf("%i",vet_completo[i]);
    }

getchar();
return 0;
}
