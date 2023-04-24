#include<stdio.h>
int main(){
int n, i, k, qf, qm, qs, qo, qe;
float pib, populacao, altitude, maior, pa, soma, mediape, menorpib, somapib;
char continente;
    printf("\n Entre com o numero de paises: ");
    scanf("%d", &n);
k = 0; i = 0; qf = 0; qm = 0; qs = 0; qo = 0; qe = 0; soma = 0;
    while(i < n){
        printf("\n Dados do %d pais: ", i+1);
        printf("\n PIB: ");
        scanf("%f%*c", &pib);
        printf("\n Populacao: ");
        scanf("%f%*c", &populacao);
        printf("\n Altitude: ");
        scanf("%f%*c", &altitude);
        printf("\n Continente: ");
        scanf("%c%*c", &continente);
//a) maior altitude
    if(i == 0){
        maior = altitude;
    }else if(maior < altitude){
        maior = altitude;
    }
//b) porcentagem de paises asiaticos
    if((continente == 'S')||(continente == 's')){
        qs++;
    }else if((continente == 'F')||(continente == 'f')){
        qf++;
    }else if((continente == 'M')||(continente == 'm')){
        qm++;
    }else if((continente == 'O')||(continente == '0')){
        qo++;
    }else{
        qe++;
    }
//c) media populacional da europa

    if((continente == 'E')||(continente == 'e')){
        soma = soma + populacao;
        mediape = soma / qe;
       }

//d) menor pib entre os paises africanos

    if((continente == 'F')||(continente == 'f')){
        if(k = 0){
        menorpib = pib;
        k = 1;
       }else if(menorpib > pib){
        menorpib = pib;
    }
    }

//e) soma dos pibs entre os paises americanos

     if((continente == 'M')||(continente == 'm')){
        somapib = somapib + pib;
       }

    i++;
    }

printf("\n Maior altitude: %.2f", maior);
pa = 100.0 * qs / n;

    if(qs == 0){
        printf("\n Sem paises Asiaticos para calculo de porcentagem");
    }else{
        printf("\n Porcentagem de paises Asiaticos: %.2f", pa);
    }

    if(qe == 0){
        printf("\n Sem paises da Europa para calcular a media da populacao!");
    }else{
        printf("\n Media populacional da Europa: %2.f", mediape);
    }

    if(qf == 0){
        printf("\n Sem paises Africanos para calculo do PIB");
    }else{
        printf("\n Menor pib entre os paises africanos: %.2f", menorpib);
    }

    if(qm == 0){
        printf("\n Sem paises da America para calcular a soma do pib!");
    }else{
        printf("\n Soma dos pibs entre os paises americanos: %.2f", somapib);
    }


getchar ();
return 0;
}
