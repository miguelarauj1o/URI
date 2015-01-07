#include <cstdio>

int main(int argc, char const *argv[])
{
	int c, x, y;
	scanf("%i", &c);

	while(c--)
	{
		scanf("%i %i", &x, &y);
		printf("%i\n", (x / 3) * (y / 3));
	}
	return 0;
}