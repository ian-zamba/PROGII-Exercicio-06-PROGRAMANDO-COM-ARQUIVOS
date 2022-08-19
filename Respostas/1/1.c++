#include <locale.h>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    setlocale(LC_ALL, "portuguese");
    char *arquivo = "exemploES.txt";
    ofstream saida;
    saida.open(arquivo, ios::out | ios::trunc);

    if (saida.is_open()){
        cout << "Arquivo aberto com sucesso" << endl;
    }

    saida << "Universidade Federal de Sergipe" << endl;
    saida << "Departamento de Sistema de Informação" << endl;
    saida.close();

    if (!saida.is_open()){
        cout << "Arquivo fechado com sucesso" << endl;
    }

    ifstream entrada(arquivo);
    string s;

    if (entrada.is_open()){
        cout << "Arquivo aberto com sucesso" << endl;
    }

    while (getline(entrada, s)){
        cout << s << endl;
    }
    entrada.close();

    if (!entrada.is_open()){
        cout << "Arquivo fechado com sucesso" << endl;
    }

    getch();
    
    return 0;
}
