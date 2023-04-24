#include<stdio.h>

int main(){

int i, n, idade, maior, qh, qm, k;
float altura, peso, soma, menor, ph, pm, maiorph;
char sexo;

printf("\n Entre com o numero de pessoas: ");
scanf("%d", &n);

soma = 0;
qh = 0; qm = 0; i = 0; k = 0;

while( i < n){

    printf("\n Dados da %d pessoa: ", i+1);
    printf("\n altura: ");
    scanf("%f%*c", &altura);
    printf("\n Peso: ");
    scanf("%f%*c", &peso);
    printf("\n Idade: ");
    scanf("%d%*c", &idade);
    printf("\n Sexo (M/F): ");
    scanf("%c%*c", &sexo);

//a = soma das alturas
    soma = soma + altura;

//b = maior idade

    if (i == 0){
            maior = idade;
    }else if(maior < idade){
        maior = idade;
    }


//c = menor peso

    if(i == 0){
        menor = peso;
    }else if(menor > peso){
        menor  = peso;
    }


//d = porcentagem de homens e mulheres

    if((sexo == 'M')||(sexo == 'm')){
        qh++;
    }else{
        qm++;
    }

//e = maior peso entre os homens

     if((sexo == 'M')||(sexo == 'm')){
        if(k == 0){
            maiorph = peso;
            k = 1;
        }else if( maiorph < peso){
            maiorph = peso;

        }
    }

    i++;

}
printf("\n A soma das alturas  = %.2f", soma);
printf("\n Maior idade = %d", maior);
printf("\n Menor peso = %.2f", menor);
ph = 100.0*(qh/n);
pm = 100.0*(qm /n);
printf("\n A porcentagem de homens = %.2f %%", ph);
printf("\n A porcentagem de mulheres = %.2f %%", pm);

if(qh == 0){
    printf("\n Não temos  homens para calcular o menor peso");

}else{
    printf("\n Maior peso entre os homens = %.2f", maiorph);

}

getchar();
return 0;
}
