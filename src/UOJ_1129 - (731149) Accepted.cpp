#include <iostream>
using namespace std;

int main()
{
    int n, q, tmp, counter;
    
    while (cin >> n && n != 0)
    {
        for (int i = 0; i < n; ++i)
        {
            counter = 0;
            for (int j = 1; j <= 5; ++j)
            {
                cin >> q;
                if (q <= 127) {
                    tmp = j;
                    counter++;
                }
            }
            
            if (counter > 1 || counter == 0) {
                cout << "*" << endl;
            }else{
                if (tmp == 1) {
                    cout << "A" << endl;
                }else if(tmp == 2){
                    cout << "B" << endl;
                }else if(tmp == 3){
                    cout << "C" << endl;
                }else if(tmp == 4){
                    cout << "D" << endl;
                }else{
                    cout << "E" << endl;
                }
            }
        }
    }
    
    return 0;
}