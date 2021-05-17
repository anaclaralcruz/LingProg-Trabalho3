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
        Catalogo();

        // Operadores de insercao e remocao
        void operator+=(Filme &);
        void operator-=(Filme &);

        // Operador de busca
        Filme* operator()(string);

        // Operadores de troca
        Filme* operator()(string, string);
        Filme* operator()(string, double);

    private:
        // Lista de filmes
        vector<Filme> filmes;
        
        // Ordenar lista 
        void ordenaLista();
};