#include <iostream>
#include <cmath>

using namespace std;

int primos[3600], k = 1, cont = 1;

bool ehprimo(int n){
    int q;
    double s = sqrt(n);
    for(q=3;q<=s;q+=2){ /// q+=2 ???
        if(n%q==0) return false;
    }
    return true;
}

int g(int n, int k){
    if(n==1) return 0;
    k = primos[cont++];
    return (g(n-1,k)+k)%n;
}

int main(){
    int i, qtPrimo, leu;
    /// coloca os números primos no setor "primos"
    primos[1] = 2;
    qtPrimo = 1;

    for(i=3;qtPrimo<3512;i+=2){
        if(ehprimo(i)){
            primos[++qtPrimo]=i;
        }
    }

    while(cin >> leu and leu){
        cout << g(leu,1)+1 << endl;
        cont = 1;
    }

    return 0;
}
