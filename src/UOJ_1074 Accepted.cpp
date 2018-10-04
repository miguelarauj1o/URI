#include <iostream>

using namespace std;

int main() {

    int N, X;
    string a = "", b = "";

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> X;

        if(X == 0){
            cout << "NULL" << endl;
        }
        else{
            if(X%2==0){
                a = "EVEN";
            }
            else{
                a = "ODD";
            }

            if(X > 0){
                b = "POSITIVE";
            }
            else{
                b = "NEGATIVE";
            }
            cout << a << " " << b << endl;
        }
    }



    return 0;
}
