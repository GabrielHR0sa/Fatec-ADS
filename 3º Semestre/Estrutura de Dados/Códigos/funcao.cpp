#include<stdio.h>

int mult(int parametro, int parametro2){

    int d = parametro * parametro2;
    return d;

}

int main(){

int a, b;
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &b);

    printf("\nValores digitados: \n");
    printf("\nPrimeiro: %d", a);
    printf("\nSegundo: %d", b);
    int novoValor = mult(a,b);
    printf("\nResultado da Multiplicacao: %d", novoValor);

 return 0;
}
