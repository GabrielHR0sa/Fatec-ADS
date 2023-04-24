#include<stdio.h>

int main(){

    int  a[100];
    int b[100];
int i, n, j, c[200], d[200];

    printf("\n Entre com o numero de elementos: ");
    scanf("%d", &n);



    for(i = 0; i < n; i++){
        printf("\n Elemento [%d] de A = ", i);
        scanf("%d", &a[i]);

    }

    for(i = 0; i < n; i++){
        printf("\n Elemento [%d] de B = ", i);
        scanf("%d", &b[i]);
    }

    j=0;
    for(i = 0; i < n; i++){
        c[j] = a[i];
        j++;
    }

     for(i = 0; i < n; i++){

        c[j]= b[n-1-i];
        j++;
    }


    j=0;
    for(i = 0; i < n; i++){
        d[j] = a[n-1-i];
        j++;

    }
    for(i = 0; i < n; i++){
        d[j]= b[i];
        j++;

    }

    for(i=0; i<n; i++){
        d[i] = a[n - 1 - i];
        d[i+n] = b[i];
    }

    for(i = 0; i< 2*n; i++){
        printf("\n D[%d] = %d", i, d[i]);
    }


/*


pegar 2 valores de a e b vetores, vetor c = a1 + b-n1+ a2 + b-n2, vetor d = a ao contrario + b normal


*/
getchar ();
return 0;
}
