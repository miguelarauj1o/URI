
#include <iostream>
#include <string>
using namespace std;
 
int fatorial(int n)
{
    int res = 1;
    for (int i = n; i > 0; --i)
    {
        res *= i;
    }
    return res;
}
 
int main()
{
    string n;
    char c;
    int s, fat, res, tmp;
 
    while(cin >> n)
    {
        if(n == "0")
            return 0;
 
        res = 0;
        fat = n.length();
 
        for (int i = 0; i < n.length(); ++i)
        {
            c = n.at(i);
            s = c - '0';
 
            tmp = fatorial(fat);
            res = res + (s * tmp);
            fat--;
        }
 
        cout << res << endl;
    }
 
    return 0;
}