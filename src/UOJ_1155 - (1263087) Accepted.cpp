#include <cstdio>
using namespace std;

int main()
{
	double d = 0, i;
	for (i = 1; i <= 100; ++i)
		d += 1/i;
		
	printf("%.2lf\n", d);
	return 0;
}