#include <cstdio>

int main()
{
	int n;
	int tmp = 1;

	scanf("%i", &n);

	for (int i = 0; i < n; ++i)
	{
		printf("%i %i %i\n", tmp, tmp * tmp, tmp * tmp *tmp);
		tmp++;
	}
	
	return 0;
}