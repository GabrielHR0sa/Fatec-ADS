var a = 2;
var b = 4;
var c = 3;
var x1 ;
var x2 ;
var delta;
bas();



function bas(){
    delta = (b*b) - 4*a*c;

    console.log("delta = " + delta);

    if(delta < 0){
        console.log("Não pode ser definido");
    }else if(delta == 0){

        x1 = ((-b) + Math.sqrt(delta))/2*a;
        x2 = ((-b) - Math.sqrt(delta))/2*a;
        console.log("Valor de x1 = " + x1);
        console.log("Valor de x2 = " + x2);

    }
}


//math.sqrt(9) para calcular a raiz quadrada

/*

    delta = b2 - 4.a.c
    delta < 0; x não pode ser definido
    delta = 0; x só pode ter 1 valor;
    delta > 0; x1 e x2;

    x = -b.raiz de delta/2.a

*/