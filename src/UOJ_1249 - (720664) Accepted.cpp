#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    string line;
    string line_resu;
    char var;
 
    while(getline(cin, line))
    {
        for (int i = 0; i < line.length(); ++i)
        {
            if(line[i] >= 'a' && line[i] <= 'z'){
                if(line[i] + 13 > 122){
                    var = 13 - (123 - line[i]); 
                    line_resu[i] = var + 97;
                }else{
                    line_resu[i] = line[i] + 13;
                }
            }else if(line[i] >= 'A' && line[i] <= 'Z'){
                if(line[i] + 13 > 90){
                    var = 13 - (91 - line[i]);  
                    line_resu[i] = var + 65;
                }else{
                    line_resu[i] = line[i] + 13;
                }
            }else{
                line_resu[i] = line[i];
            }
            cout << line_resu[i];
        }
	cout << endl;
	
        line.clear();
        line_resu.clear();
    }  
 
    return 0;
}