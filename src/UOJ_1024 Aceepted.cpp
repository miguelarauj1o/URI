#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cctype>

using namespace std;

int main(){

    int casos, tam;
    string texto, saida;

    cin >> casos;
    cin.get();
    for(int i=0;i<casos;i++){
        saida = "";
        getline(cin, texto);
        tam = texto.size();
        for(int f=0;f<tam;f++){
            if(isalpha(texto[f])) texto[f] = texto[f] + 3;
        }
        for(int f=tam-1;f>=0;f--){
            saida = saida + texto[f];
        }
        tam = (tam/2);
         for(int f=tam;f<saida.size();f++){
            saida[f] = saida[f] - 1;
        }
        cout << saida << endl;
    }

    return 0;
}
