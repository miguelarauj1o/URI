#include <cstdio>

int main()
{
	int n;
	int count = 1;

	scanf("%i", &n);

	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%i ", count);
			count++;
		}

		printf("PUM\n");
		count++;
	}

	return 0;
}