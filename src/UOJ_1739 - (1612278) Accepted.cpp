#include <cstdio>
#include <cstring>
#include <string>

#define SC1(a) scanf("%d", &a)
#define FOR(i, n) for(int i = 1; i < (n);)

using namespace std;

typedef unsigned long long ULL;

ULL arr[65];

bool findc(string s)
{
	int sz = s.length();

	for (int i = 0; i < sz; ++i)
		if(s[i] == '3')
			return true;

	return false;
}

void threebonacci(ULL * arr)
{
	ULL x, c = 0, c1 = 1, nc = 1;

	FOR(i, 65)
	{
		nc = c + c1;
		if(nc % 3 == 0 || findc(to_string(nc))){
			arr[i] = nc;
			i++;
		}

		c = c1;
		c1 = nc;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	threebonacci(arr);

	while(SC1(n) == 1)
		printf("%llu\n", arr[n]);

	return 0;
}