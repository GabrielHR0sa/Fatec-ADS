#include<stdio.h>

int main()
{
int var[] = {1, 2, 3, 4, 5, 0};

int len = sizeof(var)/sizeof(var[0]); // descobrindo o tamanho do vetor
// variável len recebe o tamanho do vetor dividido pelo numero de bits do vetor = tamanho do vetor

printf("Tamanho do vetor: %i\n\n", len);

for( int i=0; i < len; i++){
    printf("Posicao do vetor %i valor do vetor %i\n", i, var[i]);
}

}
