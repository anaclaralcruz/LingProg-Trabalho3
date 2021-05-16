// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "Filme.h" ------------------------------------------------- */
/* Inicializa a Struct Filme */

using namespace std;

#include <string>

struct Filme {
    public:
        // construtor
        Filme(string, string, double);

        string getNome();

        string getProdutora();
        void setProdutora(string);

        double getNota();
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