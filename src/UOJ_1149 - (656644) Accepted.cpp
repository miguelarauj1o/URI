#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a, n, tmp = 0;

	cin >> a >> n;

	while(n < 1)
		cin >> n;

	for (int i = 0; i < n; ++i)
	{
		tmp = tmp + a;
		a++;
	}

	printf("%i\n", tmp);

	return 0;
}