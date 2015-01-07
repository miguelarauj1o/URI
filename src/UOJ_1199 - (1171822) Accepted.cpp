#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
using namespace std;
 
int main()
{
    int n;
    string s;
    
    while(getline(cin, s))
    {
        n = atoi(s.c_str());
        
        if(n < 0){
            //cout << endl;
            return 0;
        }
        
        if(s[1] == 'x'){
            istringstream(s) >> std::hex >> n;
            cout << std::dec << n << endl;
        }else{
            cout << "0x" << std::hex << uppercase << n << endl;
        }
    }
}