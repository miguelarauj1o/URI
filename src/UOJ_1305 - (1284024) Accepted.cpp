#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double n, c, f;
	int i;

	while(cin >> n >> c)
	{
		i = n;
		f = n - i;
		if(f >= c) cout << ((int)n + 1) << endl;
		else cout << ((int)n) << endl;
	}

	return 0;
}