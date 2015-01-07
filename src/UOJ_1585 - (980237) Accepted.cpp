#include <cstdio>
using namespace std;

int main()
{
	int n, x, y;
	scanf("%i", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%i %i", &x, &y);		
		printf("%d cm2\n", (x * y)/2);
	}
	return 0;
}