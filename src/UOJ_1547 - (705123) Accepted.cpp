#include <iostream>
using namespace std;

int main()
{
	int n, q, s, x;
	int ctr = 0, ctr_f, tmp, res = 10000000;
	
	cin >> n;
	
	for(int i = 0; i < n; ++i)
	{
		cin >> q >> s;
		res = 10000000;
		ctr_f = 0;
		ctr = 0;
		
		for(int j = 0; j < q; ++j)
		{
			cin >> x;
			ctr++;
			
			tmp = s - x;
			if(tmp < 0)
				tmp = -tmp;
				
			if(tmp < res){
				res = tmp;
				ctr_f = ctr;
			}			
		}
		
		cout << ctr_f << endl;
		
	}
	
	return 0;
}