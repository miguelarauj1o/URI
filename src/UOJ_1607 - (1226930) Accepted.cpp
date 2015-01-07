#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int t, size, tmp1, tmp2, total;
	string s, a, b;
	size_t p;

	cin >> t; cin.ignore();

	while(t--)
	{
		total = 0;
		getline(cin,s);

		p = s.find(' ');
		a = s.substr(0, p); b = s.substr(p + 1);

		size = a.size();

		for (int i = 0; i < size; ++i)
		{
			tmp1 = a[i]; tmp2 = b[i];

			if(tmp2 > tmp1)
				total += (tmp2 - tmp1);
			if (tmp1 > tmp2)
				total += (26 - (tmp1 - tmp2));
		}
		cout << total << '\n';
	}

	return 0;
}