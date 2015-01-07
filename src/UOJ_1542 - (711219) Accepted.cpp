#include <iostream>
using namespace std;

int main()
{
    int q, d, p, pag;
    
    while(cin >> q && q != 0)
    {
        cin >> d >> p;
        pag = (p * d * q)/(p - q);
        if(pag > 1){
            cout << pag << " paginas" << endl;
        }else{
            cout << pag << " pagina" << endl;
        }
    }
    
    return 0;
}   