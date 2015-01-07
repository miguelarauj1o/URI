#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
	int n;

	cin >> n;

	if (n == 0)
		return 0;

	while(n != 0){

		for (int i = 1; i <= n; ++i)
		{
			/* code */
			printf("%i", i);

			if(i != n)
				printf(" ");
		}
		printf("\n");

		cin >> n;
	}

	return 0;
}