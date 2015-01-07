#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t, n, x, sum;
	string s;

	while(cin >> t >> n && (t || n))
	{
		sum = 0;

		for (int i = 0; i < t; ++i)
		{
			cin >> s >> x;
			sum += x;
		}

		if(sum == n * 3) cout << "0\n";
		else cout << (n * 3 - sum) << '\n';
	}
	return 0;
}