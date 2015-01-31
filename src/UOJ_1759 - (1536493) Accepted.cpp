#include <cstdio>

#define SC1(a) scanf("%d", &a)
#define FOR(i, n) for(int i = 0; i < (n); ++i)

using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	SC1(n);

	FOR(i, n)
	{
		printf("Ho");
		if(i != (n - 1))
			printf(" ");
	}
	printf("!\n");

	return 0;
}