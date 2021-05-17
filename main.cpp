// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "main.cpp" ------------------------------------------------- */
/* Funcao principal que contem o menu do programa */

#define OK      0

#include <iostream>
#include "Catalogo.h"


#include <vector>

using namespace std ;

int main (){
    Filme filme1 ("Batata frita", "Universal", 5.0);
    Filme filme2 ("Sandy e junior" , "Paramount" , 3.2);
    Filme filme3 ("Aconteceu" , "Vasco da Gama" , 1);
    Filme filme4 ("Zebrinha", "Ana Clara", 2.1);
    Filme filme5 ("Zebrinha", "Ana Clara", 2.1);

   // cout << "Filme 1\t" << filme1.getNome() << "\t\t" << filme1.getProdutora() << '\t' << filme1.getNota() << endl;
   // cout << "Filme 2\t" << filme2.getNome() << '\t' << filme2.getProdutora() << '\t' << filme2.getNota() << endl;

    Catalogo catalogo("Catalogo.txt");

   // vector <Filme> filmes = {filme1, filme2, filme3, filme4, filme5};

    //catalogo += filmes;

    //cout << "FILME 1:\t" << filme1 ;
    cout << catalogo ;

  /*  Filme* filme3 = catalogo ("Batat");
    if (!filme3)
        cout << "EH NULO!!!!!!!!" << endl;
    else
        cout << "Filme 3\t" << filme3->getNome() << '\t' << filme3->getProdutora() << '\t' << filme3->getNota() << endl;
    
    Filme* filme3 = catalogo ("Batata frita", "Salada de frutas");
    if (!filme3)
        cout << "EH NULO!!!!!!!!" << endl;
    else
        cout << "Filme 3\t" << filme3->getNome() << '\t' << filme3->getProdutora() << '\t' << filme3->getNota() << endl;
    
    filme3 = catalogo("Batata frita", 10.0);
    cout << "Filme 3\t" << filme3->getNome() << '\t' << filme3->getProdutora() << '\t' << filme3->getNota() << endl; */

    return OK ;
}