#include <iostream>
using namespace std;

int main()
{
	int n, k, p, counter;
	int array[1001];

	while((cin >> n >> k) && (n != 0) && (k != 0))
	{
		counter = 0;
		fill(array, array + 1001, 0);

		for (int i = 0; i < n; ++i)
		{
			cin >> p;
			array[p] += 1; 
		}

		for (int i = 0; i < 1001; ++i)
		{
			if(array[i] >= k)
				counter++;
		}

		cout << counter << endl;
	}

	return 0;
}