// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "Filme.h" ------------------------------------------------- */
/* Inicializa a Struct Filme */

using namespace std;

#include <string>
#include <iostream>

struct Filme {
    // Operadores globais
    friend ostream &operator<<(ostream&, const Filme &);
    friend istream &operator>>(istream&, Filme&);

    public:
        // construtor
        Filme(string nome = "", string produtora = "", double nota = 0);

        // Getters
        string getNome();
        string getProdutora();
        double getNota();

        // Setters
        void setProdutora(string);   
        void setNota(double);

        // operadores:
        bool operator<(Filme &);
        bool operator>(Filme &);
        bool operator==(Filme &);

    private:
        string nome;
        string produtora;
        double nota;
};