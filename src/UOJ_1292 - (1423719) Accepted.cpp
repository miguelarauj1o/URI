#include <stdio.h>
#include <math.h>

# define PI 3.14159265358979323846

int main(int argc, char const *argv[])
{
	double k = sin(108 * PI / 180) / sin(63 * PI / 180), d;

	while(scanf("%lf", &d) == 1)
		printf("%.10lf\n", k * d);

	return 0;
}