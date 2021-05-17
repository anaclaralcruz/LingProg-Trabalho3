// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "Filme.cpp" ------------------------------------------------- */
/* Contem as funcoes da Struct Filme */
#include <iomanip>

#include "Filme.h"
using namespace std;

// Operador <<
ostream &operator<<(ostream & output, const Filme & filme){
  output << filme.nome << "\t\t" 
         << filme.produtora << "\t\t"
         << fixed << setprecision (2) << filme.nota << endl;
  return output;
}
// Operador >>
istream &operator>>(istream & input, Filme& filme){
  string newNome;
  string newProdutora;
  string newNota;

  getline(input, newNome);
  getline(input, newProdutora);
  getline(input, newNota);

  filme = Filme(newNome,newProdutora,stod(newNota));

  return input;
}

// Construtor
Filme::Filme(string newNome, string newProdutora, double newNota):
  nome(newNome),
  produtora(newProdutora),
  nota(newNota){};

// Getters
string Filme::getNome() {return nome;}
string Filme::getProdutora() {return produtora;}
double Filme::getNota() {return nota;}

// Setters
void Filme::setProdutora (string newProdutora){
  produtora = newProdutora;
}
void Filme::setNota (double newNota){
  nota = newNota;
}

// Operador <
bool Filme::operator<(Filme & filmeDireita) {
  if (this->nome < filmeDireita.nome)
    return true;
  return false;
}

// Operador >
bool Filme::operator>(Filme & filmeDireita) {
  if (this->nome > filmeDireita.nome)
    return true;
  return false;
}

// Operador ==
bool Filme::operator==(Filme & filmeDireita) {
  if (this->nome == filmeDireita.nome)
    return true;
  return false;
}