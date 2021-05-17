// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "Catalogo.h" ------------------------------------------------- */
/* Inicializa a classe Grafo */

#include <vector>

#include "Filme.h"

using namespace std;

class Catalogo {
    // Operadores globais
    friend ostream &operator<<(ostream&, const Catalogo &);

    public:
        // Construtor
        Catalogo(string);

        // Operadores de insercao e remocao
        void operator+=(Filme &);
        void operator+=(vector <Filme> &);
        void operator-=(Filme &);

        // Operador de busca
        Filme* operator()(string);

        // Operadores de troca
        Filme* operator()(string, string);
        Filme* operator()(string, double);

        // Buscar filme mais bem avaliado
        void maisBemAvaliado();

        // Escreve o catalogo num arquivo
        void escreverArquivo();

    private:
        // Lista de filmes
        vector<Filme> filmes;

        // Nome do arquivo Catalogo
        string nomeArquivoCatalogo;
        
        // Ordenar lista 
        void ordenaLista();

        // Ler linhas do arquivo de entrada:
        vector <string> readLines(string);
        // Cria Filmes a partir dos dados de entrada:
        void criaFilmes (string);        
};