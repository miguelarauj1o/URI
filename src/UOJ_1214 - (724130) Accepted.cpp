#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, t, x, tot;
	float med, tmp, res;
	
	cin >> n;
	
	for(int i = 0; i < n; ++i)
	{
		cin >> t;
		tot = 0;
		tmp = 0;
		int array[t];
		
		for(int j = 0; j < t; ++j)
		{
			cin >> x;
			tot += x;
			array[j] = x;
		}
		
		med = tot / t;

		for(int j = 0; j < t; ++j){if(array[j] > med) tmp++;}

		res = (100 * tmp) / t;
		
		cout << fixed << setprecision(3) << res << "%" << endl;
	}
	
	return 0;
}