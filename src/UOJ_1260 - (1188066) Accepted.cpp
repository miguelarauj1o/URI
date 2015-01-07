#include <iostream>
#include <iomanip>
#include <map>
#include <cstring>
  
using namespace std;
  
int main(){
    int n, t, count = 0;
    char c[31];
    double tot;
    map<string, int> map;
    std::map<string, int>::iterator it;
  
    cin >> n; cin.ignore();
    
    for (int i = 0; i < n; i++)
    {
    	map.clear();
        tot = 0;
        if (count != 0){
        	cout << endl;
        }else{
        	gets(c);	
        }

        while (gets(c) && c[0] != '\0')
        {
            map[c]++;
            tot++;
        }
  
        for (it = map.begin(); it != map.end(); it++)
            cout << it->first << " " << fixed << setprecision(4) << (it->second*100*1.0)/tot << endl;
       
        count++;
    }

    return 0;
}