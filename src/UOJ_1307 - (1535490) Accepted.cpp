#include <cstdio>
#include <cstring>

using namespace std;
 
int binToDec(char a[])
{
	int m = a[0] - '0', sz = strlen(a);

	for(int i = 1; i < sz; i++)
	{
		m *= 2;
		m += (a[i] - '0');
	}
 
	return m;
}

int GCD(int a, int b)
{
	if(b > a)
		return GCD(b, a);
	 
	if(b == 0) return a;
	else return GCD(b, a % b);
}
 
int main(int argc, char const *argv[])
{
	int n, sx, sy, r;
	char s1[32], s2[32];
 
	scanf("%d\n", &n);
 
	for(int i = 1; i <= n; i++)
	{
		gets(s1); gets(s2);
	 
		sx = binToDec(s1); sy = binToDec(s2);
	 
		r = GCD(sx, sy);
	 
		if(r != 1) printf("Pair #%d: All you need is love!\n", i);
		else printf("Pair #%d: Love is not all you need!\n", i);
	}
 
	return 0;
}