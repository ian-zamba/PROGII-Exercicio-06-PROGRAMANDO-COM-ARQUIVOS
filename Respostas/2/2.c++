#include <locale.h> 
#include <conio.h> 
#include <iostream>
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::endl;

int main(){
    
    setlocale(LC_ALL, "portuguese" );
    ifstream entrada;
    ofstream saida;
    entrada.open("infile.txt");
    saida.open("outfile.txt");

    int primeiro, segundo, terceiro;
    entrada >> primeiro >> segundo >> terceiro;
    saida << "A soma dos primeiros \n"
          << "3 número em \n"
          << "infile.txt é " << (primeiro + segundo + terceiro)
          << endl;

    entrada.close( );
    saida.close( );

    getch();

    return 0;
}