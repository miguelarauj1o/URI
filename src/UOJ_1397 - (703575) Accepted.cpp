#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	int counter_a, counter_b;

	while(cin >> n && n != 0)
	{
		counter_a = 0;
		counter_b = 0;

		for (int i = 0; i < n; ++i)
		{
			cin >> a >> b;

			if(a > b)
				counter_a++;
			if(a < b)
				counter_b++;
		}

		cout << counter_a << " " << counter_b << endl;
	}

	return 0;
}