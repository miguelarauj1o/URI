#include <cstdio>

void foo(double tmp, double ctr)
{
	double md = tmp / ctr;
	printf("%.2lf\n", md);
}

int main()
{
	double ctr = 0, tmp = 0, val = 0;
	
	scanf("%lf", &val);
	
	if(val < 0)
		return 0;
		
	while(val >= 0)
	{
		tmp += val;
		ctr++;
		
		scanf("%lf", &val);
		
		if(val < 0)
		{
			foo(tmp, ctr);
			return 0;
		}
	}
	
	return 0;
}