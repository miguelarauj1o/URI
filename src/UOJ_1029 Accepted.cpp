#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int contador;

int FIB(int u){
    contador++;
    if(u >= 2){
        return FIB(u-1) + FIB(u-2);
    }
    return u;
}

int main(){
    int Num, n, resultado;
    cin >> n;
    for (int i=0;i<n;i++){
        contador = -1;
        cin >> Num;
        resultado = FIB(Num);
        cout << "fib(" << Num << ") = " << contador << " calls = " << resultado << endl;
    }

    return 0;
}
