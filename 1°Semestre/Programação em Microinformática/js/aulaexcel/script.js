var xlsx = require("xlsx");

var wb = xlsx.readFile("teste.xlsx",{cellDates:true});

//console.log(wb.SheetNames); Exibir array de planilhas

var ws  = wb.Sheets['Plan1'];
console.log(ws);

var data = xlsx.utils.sheet_to_json(ws);// organiza os valores, os dados
//console.log(data);

var newData = data.map(function(record){
    record.idade = 2022 - record.AnoNas;   // criação da idade
    delete record.AnoNasc;  // deletando o ano de nascimento
    return record;      //retornando o novo valor

});
console.log(newData);

var newWb = xlsx.utils.book_new();
var newWs = xlsx.utils.json_to_sheet(newData);

xlsx.utils.book_append_sheet(newWb,newWs, "NovaPlanilha");
xlsx.writeFile(newWb, "newDataFile.xlsx");

/*Workbook é a pasta de trabalho
CAda planilha dentro do wb é um worksheet
*/