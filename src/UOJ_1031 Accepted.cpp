#include <iostream>

using namespace std;

bool entrada;

int g(int n, int k){
    if(n==1) return 0;
    if (entrada){
        entrada = false;
        return (g(n,k)+n)%n;
    }
    return (g(n-1,k)+k)%n;
}

int main(){
    int N;
    while(cin >> N and N){
        int M = 0, resultado = 0;
        entrada = true;
        while(resultado != 13){
            M++;
            resultado = g(N-1,M)+2;
        }
        cout << M << endl;
    }
    return 0;
}
