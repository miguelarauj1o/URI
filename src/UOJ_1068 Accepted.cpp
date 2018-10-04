#include <iostream>
#include <stack>

using namespace std;

int main(){
    string expressao;

    while(cin >> expressao and expressao != "eof"){
        stack <char> p;
        string saida = "correct";
        int diamantes = 0;
        for (int i=0;i<expressao.size();i++){
            if (expressao[i] == '(')  p.push(expressao[i]);
            else if (expressao[i] == ')'){
                if (p.size() > 0){
                    p.pop();
                }
                else saida = "incorrect";
            }
        }
        if (saida == "incorrect") cout << saida << endl;
        else if (p.size() == 0) cout << "correct" << endl;
        else cout << "incorrect" << endl;
    }
    return 0;
}
