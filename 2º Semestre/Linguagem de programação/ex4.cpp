#include<stdio.h>

/*int main(){

float salario, inss, sal;

printf("\n Digite o salario: ");
scanf("%f", &sal);

if(sal <=  0){
        printf("\n Não possui salario.");

}else{
    if(sal <= 1212){
            inss = (sal/100 )*7.5;
            salario = sal - inss;
            printf("\n valor do INSS: %2.f", inss);
            printf("\n Valor liquido: %2.f", salario);

    }else if((sal > 1212 )&&(sal <= 2477.35)){
            inss = (sal/100 )*9;
            salario = sal - inss;
            printf("\n valor do INSS: %2.f", inss);
            printf("\n Valor liquido: %2.f", salario);

    }else if((sal > 2477.35 )&&(sal <= 3641.03)){
            inss = (sal/100 )*11;
            salario = sal - inss;
            printf("\n valor do INSS: %2.f", inss);
            printf("\n Valor liquido: %2.f", salario);

    }else if((sal > 3641.03 )&&(sal <= 7087.22)){
            inss = (sal/100 )*14;
            salario = sal - inss;
            printf("\n valor do INSS: %2.f", inss);
            printf("\n Valor liquido: %2.f", salario);
    }else{
            inss = (sal/100 )*15;
            salario = sal - inss;
            printf("\n valor do INSS: %2.f", inss);
            printf("\n Valor liquido: %2.f", salario);
    }
}

getchar ();
return 0;
}*/

int main(){

    float salario, inss, salariofinal, depend, salarioir, ir;

    printf("\n Digite o salario: ");
    scanf("%f", &salario);
    printf("\n Digite o numero de dependentes: ");
    scanf("%f", &depend);

    if(salario <= 1212){
        inss = salario*0.075;
    }else if(salario <= 2427.35){
    inss = (salario - 1212.01)* 0.09 + (1212*0.075);

    }else if(salario <= 3641.03){
    inss = (salario - 2427.36)* 0.11 + (2427.35-1212.01)*0.09 + (1212*0.075);

    }else if(salario < 7087.22){
    inss = (salario - 3641.04)*0.14 + (3641.03 - 2427.36)*0.11 + (2427.35 - 1212.01)*0.09 + (1212 * 0.075);
    }else{
    inss = 828.39;
    }



    salarioir = salario - inss - (depend* 189.59);

    if(salarioir <= 1903.98){
        ir = 0;

    }else if(salarioir <=2826.65){
        ir = (salarioir - 1903.98)*0.075;

    }else if(salarioir <= 3751.05){
        ir = (salarioir - 2826.65)* 0.015 + (2826.65 - 1903.98)* 0.075;

    }else if(salarioir <= 4664.68){
        ir = (salarioir - 3751.05)* 0.225 + (3751.05 - 2826.65)*0.015 + (2826.65 - 1903.98)* 0.075;

    }else{
        ir = (salarioir - 4664.68)*0.275 + (4664.68 - 3751.05)* 0.215 + (3751.05 - 2826.65)* 0.15 + (2826.65 - 1903.98)* 0.075;

    }

    salariofinal = salario - inss - ir;
    printf("\n Salario:  %.2f", salario);
    printf("\n Salario final: %.2f", salariofinal);
    printf("\n INSS: %.2f", inss);
    printf("\n IR: %.2f", ir);

}


