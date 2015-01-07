#include <iostream>

using namespace std;

int main()
{
    int x, y, a = 1;
    
    cin >> x >> y;
    
    while(a <= y)
    {
        for(int i = 0; i < x; ++i)
        {
            cout << a;
            if(i != x - 1){
                cout << " ";
            }
            a++;
        }
        cout << endl;
    }
    
    return 0;
}