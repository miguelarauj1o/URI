#include <iostream>

using namespace std;

int main()
{
    int n, a = 1;
    
    cin >> n;
    
    for(int i = 1; i <= n; ++i)
    {
        cout << a << " " << a*a << " " << a*a*a << endl;
        cout << a << " " << (a*a + 1) << " " << (a*a*a + 1) << endl;
        a++;
    }
    
    return 0;
}   