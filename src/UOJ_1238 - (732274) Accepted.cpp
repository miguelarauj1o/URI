#include <iostream>
using namespace std;

int main()
{
    string a, b;
    int n, x, y, tmp, tam, size_a, size_b;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        tam = a.length() + b.length();
        size_a = a.length();
        size_b = b.length();
        
        x = 0;
        y = 0;
        tmp = 0;
        
        for (int j = 0; j < tam; ++j) {
            
            if (tmp == 0) {
                tmp = 1;
                if (x != size_a) {
                    cout << a[x];
                    x++;
                }
            }
            if (tmp == 1) {
                tmp = 0;
                if (y != size_b) {
                    cout << b[y];
                    y++;
                }
            }
        }
        
        cout << endl;
    }
    
    return 0;
}