#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void swapAllItens(vector<int> &v)
{
    for(int i = 0, j = 19; i < 10; ++i, --j)
    {
        swap(v[i],v[j]);
    }
}

void display(vector<int> &v)
{
    for(int i = 0; i < 20; ++i)
    {
        cout << "N[" << i << "] = " << v[i] << endl;
    }
}

int main()
{
    int n;
    vector<int> v;
    
    for(int i = 0; i < 20; ++i)
    {
        cin >> n;
        v.push_back(n);
    }
    
    swapAllItens(v);
    display(v);
    
    return 0;
}