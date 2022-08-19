#include <locale.h> 
#include <conio.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
using std::cout;
using std::ifstream;
using std::ofstream;

int main(){

    setlocale(LC_ALL, "portuguese");
    ifstream entrada;
    ofstream saida;
    entrada.open("story.txt");

    if (entrada.fail()){
        cout << "A abertura do arquivo de entrada falhou.\n";
        exit(1);
    }

    saida.open("numstory.txt");
    if (saida.fail()){
        cout << "A abertura do arquivo de saida falhou.\n";
        exit(1);
    }

    char next;
    int n = 1;

    entrada.get(next);
    saida << n << " ";

    while (!entrada.eof()){

        saida << next;
        if (next == '\n'){
            n++;
            saida << n << ' ';
        }
        entrada.get(next);
    }

    entrada.close();
    saida.close();

    getch();
    
    return 0;
}
