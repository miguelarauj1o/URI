#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, x, c, v;

    while(cin >> n && n)
    {
        x = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> c >> v;
            x += v/2;
        }

        cout << x/2 << endl;
    }
    return 0;
}