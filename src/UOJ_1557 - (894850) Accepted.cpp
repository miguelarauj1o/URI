#include <iostream>
using namespace std;

int numberDigits(int x)
{
	int count = 1;
	while(x > 9)
	{
		x /= 10;
		count++;
	}
	return count;
}

int main()
{	
	int n, tmp, followMe, nDigits, max, val, dif;

	while(cin >> n && (n != 0))
	{
		int array[n][n];
		tmp = 1;
		followMe = 1;
		max = 0;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				array[i][j] = tmp;
				if(j != (n - 1))
					tmp *= 2;
			}
			if(max < tmp)
				max = tmp;
			followMe *= 2;
			tmp = followMe;
		}

		nDigits = numberDigits(max);

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				val = numberDigits(array[i][j]);
				dif = nDigits - val;
				
				for (int i = 0; i < dif; ++i)
					cout << " ";
				cout << array[i][j];
				if(j != (n - 1))
					cout << " ";
			}
			cout << '\n';
		}
		cout << '\n';
	}

	return 0;
}