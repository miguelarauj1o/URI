#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

#define ZERO(x) memset(x, 0, sizeof(x))
#define FOR(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

struct Ch{ int l, f; };

Ch arr[200];

bool cmp(Ch a, Ch b)
{
	if(a.f == b.f) return (a.l > b.l);
	return (a.f < b.f);
}

int main(int argc, char const *argv[])
{
	int sz;
	bool b = false;
	string s;

	while(getline(cin, s))
	{
		if(b) cout << '\n';
		b = true;

		sz = s.length();
		ZERO(arr);

		FOR(i, 200)
			arr[i].l = i;

		FOR(i, sz)
			arr[s[i]].f++;

		stable_sort(arr, arr + 200, cmp);

		FOR(i, 200)
			if(arr[i].f != 0)
				cout << arr[i].l << " " << arr[i].f << '\n';
	}

	return 0;
}