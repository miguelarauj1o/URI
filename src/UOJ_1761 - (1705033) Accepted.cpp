#include <cstdio>
#include <cmath>

#define sc3(a,b,c) scanf("%lf %lf %lf", &a, &b, &c)
 
const double PI = 3.1415926535897932384626433832795;

int main(void)
{
	double a, b, c;
	while(sc3(a,b,c) == 3)
		printf("%.2lf\n", (c + (b * tan(a*PI/180.0))) * 5);
	
	return 0;
}