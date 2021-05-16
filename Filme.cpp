// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "Filme.cpp" ------------------------------------------------- */
/* Contem as funcoes da Struct Filme */

#include "Filme.h"
using namespace std;

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