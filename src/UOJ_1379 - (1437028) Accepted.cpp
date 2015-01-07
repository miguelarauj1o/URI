#include <cstdio>
#include <algorithm>
#define ll long long

using namespace std;

bool check(ll a,ll b, ll c)
{
	ll d[4];
	d[1] = a; d[2] = b; d[3] = c;

	sort(d + 1,d + 4);

	if(((a+b+c) % 3 == 0) && ((a+b+c)/3 == d[2])) return true;

	return false;
}

int main(int argc, char const *argv[])
{
	ll a, b, r;

	while(scanf("%lld %lld", &a, &b) && (a || b))
	{
		r = 30000000001;

		if(check(a, b, 2 * a - b)) r = min(r, 2 * a - b);
		if(check(a, b, 2 * b - a)) r = min(r, 2 * b - a);
		if(check(a, b, (a + b) / 2)) r = min(r, (a + b) / 2);

		printf("%lld\n", r);
	}

	return 0;
}