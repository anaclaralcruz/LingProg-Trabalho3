// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "main.cpp" ------------------------------------------------- */
/* Funcao principal que contem o menu do programa */

#define OK      0

#include <iostream>
#include "Filme.h"

using namespace std ;

int main (){
    Filme filme1 ("aaaaaaaaa", "Universal", 5.0);
    Filme filme2 ("bbbbbbbb" , "Paramount" , 3.2);

    cout << "Filme 1\t" << filme1.getNome() << "\t\t" << filme1.getProdutora() << '\t' << filme1.getNota() << endl;
    cout << "Filme 2\t" << filme2.getNome() << '\t' << filme2.getProdutora() << '\t' << filme2.getNota() << endl;

    if(filme1 > filme2)
        cout << "MAIOR: " << filme1.getNome() << endl;
    else
        cout << "MAIOR: " << filme2.getNome() << endl;

    if(filme1 < filme2)
        cout << "MENOR: " << filme1.getNome() << endl;
    else
        cout << "MENOR: " << filme2.getNome() << endl;

    if(filme1 == filme2)
        cout << "SAO IGUAIS" << endl;
    else
        cout << "SAO DIFERENTES" << endl;
    return OK ;
}