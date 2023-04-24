#include<stdio.h>
#include<math.h>


int main(){

    int vetor[100];
    int i, n, soma, produto, qp, qi, sp;
    float mg, mp;

    printf("\n Entre com o numero de elementos: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\n Vetor [%d] = ", i);
        scanf("%d", &vetor[i]);
    }

//--------------------soma----------------

    soma = 0;

    for(i = 0; i < n; i++){
        soma += vetor[i];

    }

    printf("\n Soma = %d", soma);


//---------------produto---------------------
    produto = 1;
    qi = 0;

    for(i = 0; i < n; i++){

        if(vetor[i] % 2 != 0){
            produto *= vetor[i];
            qi++;
        }
    }

    if(qi == 0){
        printf("\n Não temos elemento impar, portanto não temos produto");
    }else{
        printf("\n Produto dos numeros impares = %d", produto);
    }



//----------------------quantidade par e impar------------------------------

    qp = 0;

    for(i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            qp++;
    }
}
    printf("\n Porcentagem de pares = %2.f%%", 100.0 * qp/n);
    printf("\n Porcentagem de impares = %2.f%%", 100.0 * qi/n);

//---------------------------media geometrica--------------------------

    mg = 1;

    for(i = 0; i < n; i++){
        mg = mg *vetor[i];
    }
    mg = pow(mg,1.0/n);
    printf("\n A media geometrica do %d elementos = %2.f", n, mg);

//--------------------------media ponderada------------------------

    mp = 0;
    sp = 0;

    for(i = 0; i < n; i++){
        mp = mp + vetor[i] * (i+1);
        sp = sp + (i+1);
    }
    printf("\n A media Ponderada dos %d elementos = %2.f", n, mp/sp);

getchar();
return 0;
}
