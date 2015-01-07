#include <cstdio>

int main()
{
	double a;
	double b;
	double c;

	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

	double m = (a/10 * 2) + (b/10 * 3) + (c/10 * 5);

	printf("MEDIA = %.1lf\n", m);

	return 0;
}