// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "Catalogo.cpp" ------------------------------------------------- */
/* Contem os metodos da classe Catalogo */

#include <iostream>

#include "Catalogo.h"

using namespace std ;

// Operador <<
ostream &operator<<(ostream & output, const Catalogo & catalogo){
    output << "NOME\t\t\tPRODUTORA\t\tNOTA" << endl ;
    for (long unsigned int i = 0 ; i < catalogo.filmes.size() ; i++)
        output << catalogo.filmes[i] ;
    return output;
}

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
    ordenaLista();
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

// Buscar um filme pelo nome
Filme* Catalogo::operator()(string nome){
    for (long unsigned int i = 0 ; i < filmes.size() ; i++)
        if (filmes[i].getNome() == nome)
            return &filmes[i];
    return NULL ;
}

// Trocar a produtora de um filme
Filme* Catalogo::operator()(string nome, string novaProdutora){
    Filme* filmeAlterado = (*this)(nome);
    if (! filmeAlterado)
        return NULL ;
    filmeAlterado->setProdutora(novaProdutora);
    return filmeAlterado;
}

// Trocar a nota de um filme
Filme* Catalogo::operator()(string nome, double novaNota){
    Filme* filmeAlterado = (*this)(nome);
    if (! filmeAlterado)
        return NULL ;
    filmeAlterado->setNota(novaNota);
    return filmeAlterado;
}

// Ordena lista
void Catalogo::ordenaLista(){
    Filme auxiliar("","", 0);
    for (long unsigned int i = 0 ; i < filmes.size() ; i++)
        for (long unsigned int j = 0 ; j < filmes.size() ; j++)
            if (filmes[j] > filmes[i]){
                auxiliar = filmes [i];
                filmes[i] = filmes[j];
                filmes[j] = auxiliar ;

            }
}