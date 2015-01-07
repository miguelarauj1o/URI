#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int> &v)
{
    if(v.size() == 5)
        return true;
    return false;
}

void displayP(vector<int> &v)
{
    for(int i = 0; i < 5; ++i)
    {
        cout << "par[" << i << "] = " << v[i] << endl;
    }
}

void displayI(vector<int> &v)
{
    for(int i = 0; i < 5; ++i)
    {
        cout << "impar[" << i << "] = " << v[i] << endl;
    }
}

void rest(vector<int> &par, vector<int> &impar)
{
    int p = par.size();
    int im = impar.size();
    
    for(int i = 0; i < im; ++i)
    {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }
	
	for(int i = 0; i < p; ++i)
    {
        cout << "par[" << i << "] = " << par[i] << endl;
    }
}

int main()
{
    int  n;
	bool ver;
    vector<int> par;
    vector<int> impar;

    for(int i = 0; i < 15; ++i)
    {
        cin >> n;
        ver = false;

        if(n % 2 == 0){
            par.push_back(n);
                  
        }else{
            
            impar.push_back(n);
        }

		ver = check(par);
            if(ver == true){
                displayP(par);
                par.clear();
        }

		ver = check(impar);
            if(ver == true){
                displayI(impar);
                impar.clear();
        }
    }
    
    rest(par, impar);

    return 0;
}