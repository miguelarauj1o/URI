#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    double a, b, c, d, m;
    
    cin >> n;

    while(n--)
    {
        cin >> a >> b >> c >> d;
        char buff[ 50 ];

        m = ((d - b)/(c - a));
        sprintf(buff, "%lf", m);
        
        for(int j = 0; j < 50; j++) 
        {    
            if(buff[j] != '.') {
                cout << buff[j];
            }else {
                cout << ",";
                
                for(int k = j + 1; k < j + 3; k++)
                    cout << buff[k];
                cout << "\n";
                break;
            }
        }	
    }
    
    return 0;
}