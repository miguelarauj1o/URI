#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
	int n, size, max, tmp;
	string line;

	cin >> n;

	while(n != 0)
	{
		cin.ignore();
		vector<string> v;
		max = 0;

		for (int i = 0; i < n; ++i)
		{
			getline(cin, line);
			v.push_back(line);
			size = line.length();
			if(size > max)
				max = size;
		}

		for (int i = 0; i < n; ++i)
		{
			tmp = v[i].length();
			for (int i = 0; i < (max - tmp); ++i)
				cout << " ";

			cout << v[i] << endl;
		}

		cin >> n;

		if(n != 0)
			cout << endl;

	}

	return 0;
}