#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, r;
    
    while(cin >> a && a != 0)
    {
        cin >> b >> c;
        r = a * b * (100.0/c);
        r = (int) sqrt(r);
        cout << r << endl;
        
    }
    
    return 0; 
}