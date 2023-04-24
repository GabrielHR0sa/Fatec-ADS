// See https://aka.ms/new-console-template for more information
//Console.WriteLine("Hello, World!");

using Aula03;

//Produto p1 = new Produto(1, "Carvão", 15.90M);
////p1.Id = 1;
////p1.Descricao = "Carvão";
////p1.Valor = 15.90M;

//Produto p2 = new Produto(2,"Picanha", 69.90M);
////p2.Id = 2;
////p2.Descricao = "Picanha";
////p2.Valor = 69.90M;

//Produto p3 = new Produto(3, "Cerveja", 1.85M);
////p3.Id = 3;
////p3.Descricao = "Cerveja";
////p3.Valor = 1.85M;

//Produto p4 = new Produto(4, "Barbie", 150.00M) ;
////p4.Id = 4;
////p4.Descricao = "Barbie";
////p4.Valor = 150.00M;

//Produto p5 = new Produto(5, "Bola", 35.90M);
////p5.Id = 5;
////p5.Descricao = "Bola";
////p5.Valor = 35.90M;

//Produto p6 = new Produto(6, "Skin Master Yi", 75.00M);
////p6.Id = 6;
////p6.Descricao = "Skin Master Yi";
////p6.Valor = 75.00M;

//Console.WriteLine(p1.getDescricao() + " Valor R$" + p1.getValor());
//Console.WriteLine(p2.getDescricao() + " Valor R$" + p2.getValor());
//Console.WriteLine(p3.getDescricao() + " Valor R$" + p3.getValor());
//Console.WriteLine(p4.getDescricao() + " Valor R$" + p4.getValor());
//Console.WriteLine(p5.getDescricao() + " Valor R$" + p5.getValor());
//Console.WriteLine(p6.getDescricao() + " Valor R$" + p6.getValor());

//for (int i = 1; i <=267;i++)
//{
//    Produto p = new Produto(i, "Produto nº " + i, i * (i / 2 * 145));
//    //p.Id = i;
//    //p.Descricao = "Produto nº " + i;
//    //p.Valor = i * (i / 2 * 145);
//    Console.WriteLine(p.getDescricao() + " Valor R$" + p.getValor());
//}

for (int i = 1; i <= 5000; i++)
{
    Cliente p = new Cliente(i, "Cliente" + i, "04866232" + i);
    
   Console.WriteLine(p.getNome() + " CPF: " + p.getCpf());
}