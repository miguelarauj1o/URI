#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long h, m;

    while(cin >> h && h)
    {
        m = h;
        while(h != 1)
        {
            if(h % 2 == 0){
                h /= 2;
            }else{
                h *= 3; h++;
            }

            if(h > m)
                m = h;
        }
        cout << m << endl;
    }
    return 0;
}