#include <cstdio>

#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
#define for(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

void arred(double m, double p, double max7, double max10)
{
	if(m/p >= 4.0 && m/p < 7.0){
		if(max7 > m/p) printf("%.2lf\n", max7);
		else printf("%.2lf\n", m/p);
	}else{
		if(max10 > m/p) printf("%.2lf\n", max10);
		else printf("%.2lf\n", m/p);
	}
}

int main(int argc, char const *argv[])
{
	int t, p, n;
	double m, x, max7, max10;

	sc1(t);

	while(t--)
	{
		sc2(p, n);

		for(i, n)
		{
			m = max7 = max10 = 0;
			for(j, p)
			{
				scanf("%lf", &x);
				m += x;
				if(max10 < x)
					max10 = x;
				if(max7 < x && x < 7.0)
					max7 = x;
			}

			if(m/p < 4.0) printf("%.2lf\n", m/p);
			else arred(m, p, max7, max10);
		}
	}

	return 0;
}