
var repeticao = 'S';

while ((repeticao == 'S') || (repeticao == 's')) {

    var peso = prompt("Informe o peso: ");
    var altura = prompt("Informe a altura: ");
    var soma = peso / (altura * altura);

    peso = parseFloat(peso);
    altura = parseFloat(altura);



    if (soma < 18.5) {
        alert("Abaixo do peso");
    } else if ((soma >= 18.5) || (soma < 24.9)) {
        alert("Normal");
    } else if ((soma >= 25) || (soma < 29.9)) {
        alert("Sobrepeso");
    } else if ((soma >= 30) || (soma < 34.9)) {
        alert("Obesidade I");
    } else if ((soma >= 35) || (soma < 39.9)) {
        alert("Obesidade II");
    } else {
        alert("Obesidade III");
    }

    repeticao = prompt("Deseja refazer o IMC (S - sim)(N - não): ");
}


