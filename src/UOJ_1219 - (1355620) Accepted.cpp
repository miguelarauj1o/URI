#include <cstdio>
#include <cmath>
const double PI = 3.1415926535897;

int main(int argc, char const *argv[])
{
	double a, b, c, p, t, cg, cp, v, r, g;

	while(scanf("%lf %lf %lf", &a, &b, &c) != EOF)
	{
		p = (a + b + c)/2.0;
		t = sqrt(p * (p-a) * (p-b) * (p-c));
		cp = pow(t/p,2) * (PI);
        cg = pow((a * b * c) / (4 * t), 2) * (PI);

        v = t - cp;
        g = cg - t;
        r = cp;
        printf("%.4lf %.4lf %.4lf\n", g, v, r);
	}
	return 0;
}