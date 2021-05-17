Autora: Ana Clara Loureiro Cruz
UFRJ - DEL - ENGENHARIA ELETRONICA E DE COMPUTACAO
Trabalho de Ling Prog
Programa feito em c++

------------------- PROJETO PARA IMPLEMENTAR UM CATALOGO DE FILMES --------------------------

Este programa tem como objetivo gerir um catalogo de filmes a partir de um arquivo .txt contendo
seus dados.
No menu, estao seguintes funcionalidades:
1. Exibir Catalogo em ordem alfabetica;
2. Inserir filme no catalogo;
3. Inserir varios filmes no catalogo;
4. Remover um filme do catalogo;
5. Buscar um filme;
6. Editar um filme;
7. Exibir filme mais bem avaliado;
8. Sair e salvar alterações.

---------------------------------- MANUAL DO PROGRAMA ---------------------------------------

ULTILIZACAO
    - Abrir pasta
    - Compilar e linkeditar o programa usando o comando "make"
    - Inicializar o executavel "./trabalho"
    (um menu aparecera na tela com as opcoes)
    - insira o numero correspondente a opcao que deseja, o resultado aparecera na tela.

ENTRADA DE DADOS:
    A entrada deve ser feita atraves de um Arquivo .txt em que cada linha contem os dados de
    um Filme. 
    Cada linha deve conter o nome do filme, a sua produtora e a nota do filme separados por ';'
    ou seja, o arquivo deve ser da seguinte forma:

    [NOME FILME 1];[PRODUTORA FILME 1];[NOTA FILME 1]
    [NOME FILME 2];[PRODUTORA FILME 2];[NOTA FILME 2]
    [NOME FILME 3];[PRODUTORA FILME 3];[NOTA FILME 3]
    .
    .
    .

    Um exemplo de arquivo de entrada esta anexado com o nome "Catalogo.txt".
    Para alterar o nome do arquivo de entrada, a macro ARQUIVO_DE_ENTRADA no "main.cpp" 
    deve ser alterada com o nome do arquivo.

------------------------- ARQUIVOS ---------------------------------------------------------

"Catalogo.cpp"        Contem os metodos referentes a classe Catalogo
"Catalogo.h"          Inicializa a classe Catalogo
"Filme.cpp"           Contem as funcoes referentes a 'Struct' Filme
"Filme.h"             Inicializa a 'Struct' Filme
"main.cpp"            Programa principal que contem o menu do programa
"Makefile"            Realiza a compilacao e linkedicao do programa
"Catalogo.txt"        Arquivo que contem o Catalogo salvo