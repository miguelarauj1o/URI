#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

#define SC2(a, b) scanf("%d %d", &a, &b)
#define ZERO(x) memset(x, 0, sizeof(x))
#define FOR(i, n) for(int i = 0; i < (n); ++i)
#define REP(i, a, b) for (int i = (a); i <= (b); ++i)

using namespace std;

bool check(int n)
{
	char c;
	string tmp = to_string(n);
	int sz = tmp.length();

	FOR(i, sz)
	{
		c = tmp[i];
		REP(j, (i + 1), sz)
			if(tmp[j] == c)
				return true;
	}

	return false;
}

int arr[5001];

int main(int argc, char const *argv[])
{
	int n, m, c;
	string s;

	while(SC2(n, m) == 2)
	{
		c = 0;
		ZERO(arr);

		REP(i, n, m)
		{
			if(arr[i] == 0){
				if(check(i)) arr[i] = 1;
				else arr[i] = 2;
			}
		}

		REP(i, n, m)
			if(arr[i] == 2)
				c++;

		printf("%d\n", c);
	}

	return 0;
}