#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	while(cin >> n && n)
	{
		int nc[n + 1];
		nc[n] = 1; nc[n - 1] = 1;

		for (int k = n - 2; k >= 0; --k)
			nc[k] = nc[k + 1] + nc[k + 2];

		cout << nc[0] << '\n';
	}
	return 0;
}