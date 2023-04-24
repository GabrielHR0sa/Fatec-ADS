using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula03
{
    public class Cliente
    {
        public Cliente(int id, string nome, string cpf)
        {
            Id = id;
            Nome = nome;
            Cpf = cpf;
        }

        private int Id;
        private string Nome;
        private string Cpf;

        public string getNome()
        {
            return "Nome do Cliente: " + Nome;
        }

        public string getCpf()
        {
            return Cpf;
        }

        public int getId()
        {
            return Id;
        }
    }
}