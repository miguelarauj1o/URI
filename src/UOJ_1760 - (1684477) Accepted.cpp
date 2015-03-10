#include <cstdio>
#include <cmath>

#define sc1(a) scanf("%d", &a)

using namespace std;

int main(int argc, char const *argv[])
{
	int l;
	while(sc1(l) == 1)
		printf("%.2lf\n", ((8 * ((l * l * sqrt(3))/2))/5)/2);

	return 0;
}