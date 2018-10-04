#include <iostream>
#include <stack>

using namespace std;

int main(){
    string expressao;
    int n;

    cin >> n;
    for (int j=0;j<n;j++){
        stack <char> p;
        int diamantes = 0;
        cin >> expressao;
        for (int i=0;i<expressao.size();i++){
            if (expressao[i] == '<')  p.push(expressao[i]);
            else if ((expressao[i] == '>') and (p.size() > 0)){
                p.pop();
                diamantes++;
            }
        }
        cout << diamantes << endl;
    }
    return 0;
}
