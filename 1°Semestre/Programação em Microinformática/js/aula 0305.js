var num = 3;
var quadrado;
square();   //chama a função
num = 4;        // trocou o valor
square();       // chamou a função novamente




function square(){
    quadrado = num*num;
    console.log("O quadrado de " + num + "é" + quadrado);

}


