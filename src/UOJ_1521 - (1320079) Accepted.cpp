#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, x, k;

	while(cin >> n && n)
	{
		int culp[n + 1];

		for (int i = 0; i < n; ++i)
		{
			cin >> x;
			culp[i + 1] = x;
		}
		cin >> k;

		while(culp[k] != k)
			k = culp[k];
		
		cout << k << endl;
	}
	return 0;
}