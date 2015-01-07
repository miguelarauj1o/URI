#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, l, size, t, tmp;
	string s;
	scanf("%i", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%i", &l); cin.ignore();
		t = 0;

		for (int j = 0; j < l; ++j)
		{
			getline(cin, s);
			size = s.length();

			for (int x = 0; x < size; ++x)
			{
				tmp = ((int(s[x]) - 65) + j + x);
				t += tmp;
			}
		}

		cout << t << endl;
	}
	return 0;
}