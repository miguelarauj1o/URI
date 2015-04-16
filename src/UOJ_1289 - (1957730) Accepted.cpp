#include <cstdio>
 
using namespace std;
 
#define sc1(a) scanf("%d", &a)
#define sc3(a,b,c) scanf("%d %lf %d", &a, &b, &c)
#define fr(i,a,n) for(int i = (a); i < (n); i++)
 
double p, pn, pi, s, r;
double exp(double p, int k);
 
int main(int argc, char const *argv[])
{
	int s, n, i;
	sc1(s);
 
	while(s--)
	{
		sc3(n,p,i);
		pn = exp(1 - p, n), pi = exp(1 - p, i - 1), r = pi;
 
		fr(j,0,10000)
		{
			pi *= pn;
			r += pi;
		}
 
		printf("%.4lf\n", r * p);
	}
 
	return 0;
}
 
double exp(double p, int k)
{
	r = 1;
	fr(i,0,k)
		r *= p;
 
	return r;
}