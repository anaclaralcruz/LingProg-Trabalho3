// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "Catalogo.cpp" ------------------------------------------------- */
/* Contem os metodos da classe Catalogo */

#include <iostream>

#include "Catalogo.h"

using namespace std ;

// Construtor
Catalogo::Catalogo(){}

// Adicionar filme
void Catalogo::operator+=(Filme& novoFilme){
    for (long unsigned int i = 0 ; i < filmes.size() ; i++)
        if (filmes[i] == novoFilme){
            cout << "Este filme ja esta no catalogo!" << endl ;
            return ;
        }
    filmes.push_back(novoFilme);
}

// Remover filme
void Catalogo::operator-=(Filme& filme){
    for (long unsigned int i = 0 ; i < filmes.size() ; i++)
        if (filmes[i] == filme){
            filmes.erase(filmes.begin()+i);
            return ;
        }
    cout << "Este filme nao esta no catalogo!" << endl ;
}

// Mostrar catalogo
void Catalogo::show(){
    cout << "CATALOGO: \n" ;
    for (long unsigned int i = 0 ; i < filmes.size() ; i++)
        cout << filmes[i].getNome() << endl ;
}