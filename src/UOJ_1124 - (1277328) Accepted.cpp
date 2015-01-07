#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int l, c, r1, r2;

	while(cin >> l >> c >> r1 >> r2 && (l || c))
	{
		if(min(l,c) < max(r1,r2) * 2) cout << "N\n";
		else{
			r1 += r2;
	        l -= r1; 
	        c -= r1;
	        
	        if(r1 * r1 > ((l * l) + (c * c))) cout << "N\n";
	        else cout << "S\n";
		}
	}
	return 0;
}
