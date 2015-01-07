#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
    int ini = 5, fim = 6;
    char c;
    double x, tmp = 0;
 
    double matrix[12][12];
 
    cin >> c;
 
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            cin >> x;
            matrix[i][j] = x;
        }
    }
 
    for (int i = 7; i < 12; ++i)
    {
        if(ini > 0 && fim < 11)
		{
		    for(int j = ini; j < (fim + 1); ++j)
		    {   
		        tmp += matrix[i][j]; 
		    }
		    ini--;
		    fim++;
		}
    }
 
    if(c == 'S'){
        cout << fixed << setprecision(1) << tmp << endl;
    }else{
        cout << fixed << setprecision(1) << tmp/30 << endl;
    }
 
    return 0;
}