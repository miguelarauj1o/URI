#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <sstream>

#define sc1(a) scanf("%d", &a)
#define zero(x) memset(x, 0, sizeof(x))
#define for(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int arr[4];

int getVal(int x, int op)
{
	zero(arr);
	int rem, r;
	stringstream ss;

	for(i, 4)
	{
		rem = x % 10;
		arr[i] = rem;
		x /= 10;
	}

	sort(arr, arr + 4);
	if(op == 0) reverse(arr, arr + 4);

	for(i, 4)
		ss << arr[i];

	ss >> r;
	return r;
}

int krapekar(int x)
{
	bool flag = false;
	int cnt, ma, me, loop;
	cnt = loop = 0;

	while(x != 6174)
	{
		ma = getVal(x, 0);
		me = getVal(x, 1);
		x = ma - me;
		if(x == 0){
			loop++;
			if(loop > 20){
				flag = true;
				break;
			}
		}
		cnt++;
	}

	if(flag) return -1;
	else return cnt;
}

int main(int argc, char const *argv[])
{
	int t, n, c = 1, r;
	sc1(t);

	while(t--)
	{
		sc1(n);
		r = krapekar(n);
		printf("Caso #%d: %d\n", c, r);
		c++;
	}

	return 0;
}