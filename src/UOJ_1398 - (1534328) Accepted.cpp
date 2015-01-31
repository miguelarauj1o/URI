#include <cstdio>
#include <cstring>
#include <iostream>

#define FOR(i, n) for(int i = 0; i < (n); ++i)
#define MOD 131071

using namespace std;

int main(int argc, char const *argv[])
{
	int r, k, sz;
	string str, l;

	while(cin >> l)
	{
		str = l;
		sz = l.length();

		while(l[sz - 1] != '#')
		{
			cin >> l;
			sz = l.length();
			str += l;
		}

		sz = str.length();
		r = 0;

		FOR(i, (sz - 1))
		{
			k = str[i] - '0';
			r = r * 2 + k;
			r %= MOD;
		}

		if(!r) puts("YES");
		else puts("NO");
	}

	return 0;
}