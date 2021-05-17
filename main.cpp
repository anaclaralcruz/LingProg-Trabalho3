// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "main.cpp" ------------------------------------------------- */
/* Funcao principal que contem o menu do programa */

#define OK                      0

#define NOME_ARQUIVO_CATALOGO   "Catalogo.txt"

#include <iostream>
#include "Catalogo.h"

using namespace std ;

int main (){
    int opcaoMenu;

    Catalogo catalogo(NOME_ARQUIVO_CATALOGO);

    // Menu de entrada:
    cout << " ______________________________________________________" << endl;
    cout << "| 1 | Exibir Catalogo em ordem alfabetica             |" << endl;
    cout << "| 2 | Inserir filme no catalogo                       |" << endl;
    cout << "| 3 | Inserir varios filmes no catalogo               |" << endl;
    cout << "| 4 | Remover um filme do catalogo                    |" << endl;
    cout << "| 5 | Buscar um filme                                 |" << endl;
    cout << "| 6 | Editar produtora de um filme                    |" << endl;
    cout << "| 7 | Editar nota de um filme                         |" << endl;
    cout << "| 8 | Exibir filme mais bem avaliado                  |" << endl;
    cout << "| 9 | Sair e salvar dados                             |" << endl;
    cout << "|_____________________________________________________|" << endl;
    cout << "O que deseja? (digite o numero) -> ";
    cin >> opcaoMenu ;
    cin.ignore();
    cout << endl;

    if (opcaoMenu == 1)
        cout << catalogo ;
    
    else if (opcaoMenu == 2){
        Filme filme ;
        cout << "Escreva [Nome do filme] ENTER [Produtora] ENTER [nota] ENTER :\t" ;
        cin >> filme ;
        catalogo += filme ;
        cout << "Filme adicionado com sucesso!!" << endl ;
    }

    else if (opcaoMenu == 3){
        bool novoFilme = true;
        Filme filme ;
        vector <Filme> entrada ;
        char in ;

        while (novoFilme){
            cout << "Escreva [Nome do filme] ENTER [Produtora] ENTER [nota] ENTER :\t" ;
            cin >> filme ;
            entrada.push_back(filme);
        
            cout << "Adicionar outro filme? (s/n) " ;
            cin >> in;
            cin.ignore();
            if (in == 'n')
                novoFilme = false;
        }
        catalogo += entrada;
    }

    else if (opcaoMenu == 4){
        string nomeDoFilme ;

        cout << "Escreva o nome do filme que deseja remover: " ;
        cin >> nomeDoFilme ;
        
        Filme* filme = catalogo(nomeDoFilme);

        catalogo -= *filme ;
        cout << "Filme \"" << filme->getNome() << "\" removido com sucesso!!" << endl;
    }

    else if (opcaoMenu == 5){
        string nomeDoFilme ;

        cout << "Escreva o nome do filme que esta procurando: " ;
        cin >> nomeDoFilme ;
        
        Filme* filme = catalogo(nomeDoFilme);

        if (!filme) cout << "FILME NAO ENCONTRADO!" << endl;
        else cout << *filme << endl;
    }
   
    else if (opcaoMenu == 6){
        string nomeDoFilme ;
        cout << "Qual filme deseja editar? " ;
        getline(cin, nomeDoFilme) ;
        
        string novaProdutora;
        cout << "Digite a nova produtora: ";
        getline(cin, novaProdutora) ;

        Filme* filme = catalogo(nomeDoFilme, novaProdutora);

        if (!filme) cout << "FILME NAO ENCONTRADO!" << endl;
        else cout << "Filme editado com sucesso!" << endl;
    }

    else if (opcaoMenu == 7){
        string nomeDoFilme ;
        cout << "Qual filme deseja editar? " ;
        getline(cin, nomeDoFilme) ;
        
        string novaNota;
        cout << "Digite a nova nota: ";
        getline(cin, novaNota) ;
        
        Filme* filme = catalogo(nomeDoFilme, stod(novaNota));

        if (!filme) cout << "FILME NAO ENCONTRADO!" << endl;
        else cout << "Filme editado com sucesso!" << endl;
    }

    else {
        cout << "ENTRADA INVALIDA escolha um numero de 1 a 8 !!" << endl;
        main ();
    }

    catalogo.escreverArquivo();

    cout << endl;
    return OK ;
}