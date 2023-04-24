#include<stdio.h>

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
        ir = (salarioir * 0.075) - 142.80;
    }else if(salarioir <= 3751.05){
        ir = (salario * 0.15) - 354.80;
    }else if(salarioir <= 4664.68){
        ir = (salarioir * 0.0225) - 636.13;
    }else{
        ir = (salario * 0.275) - 869.36;
    }

    salariofinal = salario - inss - ir;
    printf("\n Salario:  %.2f", salario);
    printf("\n Salario final: %.2f", salariofinal);
    printf("\n INSS: %.2f", inss);
    printf("\n IR: %.2f", ir);

}
