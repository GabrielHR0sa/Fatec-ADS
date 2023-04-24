using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula01.Classes
{
    class Pessoa
    {
        int idade;
        string nome;
        string tamanhoCamiseta;

        string getTamanhoCamiseta()
        {
            return tamanhoCamiseta;
        }

        int getIdade()
        {
            return idade;
        }

        string getNome()
        {
            return nome;
        }
    }
}
