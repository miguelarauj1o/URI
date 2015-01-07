#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, t, x, counter;
	char p;

	cin >> n;

	for (int j = 0; j < n; ++j)
	{
		cin >> t;

		vector<int> tiros;
		vector<char> pulos;
		counter = 0;;

		for (int i = 0; i < t; ++i)
		{
			cin >> x;
			tiros.push_back(x);
		}

		for (int i = 0; i < t; ++i)
		{
			cin >> p;
			pulos.push_back(p);
		}

		for (int i = 0; i < t; ++i)
		{
			if((tiros[i] == 1 || tiros[i] == 2) && pulos[i] == 'S')
				counter++;
			if(tiros[i] > 2 && pulos[i] == 'J')
				counter++;
		}

		cout << counter << endl;
	}

	return 0;
}