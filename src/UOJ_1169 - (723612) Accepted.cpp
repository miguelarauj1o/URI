#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, x;
	unsigned long long int q;
	
	cin >> n;
	
	for(int i = 0; i < n; ++i)
	{
		q = 1;
		cin >> x;
		
		if(x == 64){
			cout << "1537228672809129 kg" << endl;
		}else{
			for(int j = 0; j < x; ++j){q *= 2;}
			q = ((q/12)/1000);
			cout << fixed << setprecision(0) << q << " kg" << endl;
		}
	}
	
	return 0;
} 