#include <iostream>

using namespace std;

int main()
{
	int m, n;
	int min, max, tmp;

	cin >> m >> n;

	while(m > 0 && n > 0)
	{
		tmp = 0;
		if(m < n){
			min = m;
			max = n;
		}else{
			max = m;
			min = n;
		}

		for (int i = min; i <= max; ++i)
		{
			cout << i << " ";
			tmp += i;
		}

		cout << "Sum=" << tmp << endl;
		cin >> m >> n;
	}

	return 0;
}