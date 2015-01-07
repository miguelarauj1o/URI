#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
 
int main()
{
    int t, n, i, j;
    bool b;
    double res, size, P, A, M;
    string aluno, presenca;
    cin >> t;
     
    while(t--)
    {
        cin >> n;
        vector<string> _a; vector<string> _p; vector<float> _f;
         
        for(i = 0; i < n; ++i)
        {
            cin >> aluno;
            _a.push_back(aluno);
        }
         
        for(i = 0; i < n; ++i)
        {
            cin >> presenca;
            _p.push_back(presenca);
            size = presenca.length();
            P = 0; A = 0; M = 0;
             
            for(j = 0; j < size; ++j)
            {
                if(presenca[j] == 'P'){
                    P++;
                }else if(presenca[j] == 'A'){
                    A++;
                }else{
                    M++;
                }
            }
            size -= M;
            res = P/size;
            _f.push_back(res);
        }

        b = false;
        
        for(i = 0; i < n; ++i)
        {
            if(_f[i] < 0.75){
                if(b) cout << " ";
                b = true;
                cout << _a[i];
            }
        }
        cout << endl;
    }
     
    return 0;
}