using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula03
{
    public class Produto
    {
        public Produto(int id, string decricao, decimal valor) 
        {
            Id = id;
            Descricao = decricao;
            Valor = valor;
        }

        private int Id;
        private string Descricao;
        private decimal Valor;
        
        public string getDescricao()
        {
            return "O produto da minha loja é: " + Descricao;
        }

        public decimal getValor()
        {
            return Valor;
        }
        
        public int getId()
        {
            return Id;
        }
    }
}
