#include <iostream>
using namespace std;

int main()
{
	int t, n, x;

	cin >> t;

	for (int i = 1; i <= t; ++i)
	{
		cin >> n;

		for (int j = 1; j <= n; ++j)
		{
			cin >> x;
			if(j == (n/2 + 1)){
				cout << "Case " << i << ": " << x;
				continue;
			}
		}
		cout << endl;
	}

	return 0;
}