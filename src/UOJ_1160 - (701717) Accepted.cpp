#include <iostream>
using namespace std;

int main()
{
	int t, pa, pb, ctr;
	double ga, gb;
	
	cin >> t;
	
	for(int i = 0; i < t; ++i)
	{
		ctr = 0;
		cin >> pa >> pb >> ga >> gb;
				
		while(pa <= pb && ctr <= 100)
		{
			ctr++;
			pa += (pa * (ga/100));
			pb += (pb * (gb/100));
		}
		
		if(ctr > 100){
			cout << "Mais de 1 seculo." << endl;
		}else{
			cout << ctr << " anos." << endl;
		}
	}
	
	return 0;
}