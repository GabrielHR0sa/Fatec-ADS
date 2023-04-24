#include<stdio.h>

int main(){

int vetor[] = {1, 3, 4, 9, 8, 97, 6 ,12, 14, 13, 11, 18, 21, 26, 32, 49, 84, 56, 99, 38};
int i, troca, aux;
int contador = 0;

  int len = sizeof(vetor)/sizeof(vetor[0]);

  printf("Vetor Antigo: \n");
  for(i = 0; i<len; i++){
    printf("%i\n",vetor[i]);
  }

    do{
        troca = 0;
        for(i = 0; i < len; i++){
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                troca = 1;
            }
        }
    }while(troca);

    printf("Vetor ordenado: \n");
    for(i = 0; i<len; i++){
    printf("%i\n",vetor[i]);
  }

  return 0;
}
