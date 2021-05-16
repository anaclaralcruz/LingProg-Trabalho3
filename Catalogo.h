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
  public:
    // Construtor
    Catalogo();

    // Operadores de insercao / remocao
    void operator+=(Filme &);
    void operator-=(Filme &);

    // Mostrar catalogo
    void show();

  private:
    // Lista de filmes
    vector<Filme> filmes;
};