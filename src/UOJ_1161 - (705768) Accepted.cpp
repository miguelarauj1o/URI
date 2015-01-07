#include <iostream>
using namespace std;

int main()
{
	long long int m, n, tmp, tmp2;

	while(cin >> m >> n)
	{
		tmp = 1;
		tmp2 = 1;
		for (int i = m; i > 0; --i)
		{
			tmp *= m;
			m--;
		}

		for (int i = n; i > 0; --i)
		{
			tmp2 *= n;
			n--;
		}

		cout << (tmp + tmp2) << endl;
	}

	return 0;
}