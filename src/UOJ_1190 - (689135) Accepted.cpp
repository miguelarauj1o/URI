#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
    int ini = 11, fim = 12;
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
 
    for (int i = 1; i <= 10; ++i)
    {
        if(ini > 6)
		{
		    for(int j = ini; j < fim; ++j)
		    {   
		        tmp += matrix[i][j]; 
		    }
		    if(i < 5){
		    	ini--;
		    }else if(i == 5){
		    }else{
		    	ini++;
		    }
		}
    }
 
    if(c == 'S'){
        cout << fixed << setprecision(1) << tmp << endl;
    }else{
        cout << fixed << setprecision(1) << tmp/30 << endl;
    }
 
    return 0;
}