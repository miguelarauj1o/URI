#include <stdio.h>

int main(int argc, char const *argv[]) {
	double v, d, alt, ar;
   
	while (scanf("%lf%lf", &v, &d) == 2) {
		ar = 3.14 * (d / 2 * d / 2), alt = v / (3.14 * (d / 2 * d / 2));
		printf("ALTURA = %.2lf\nAREA = %.2lf\n", alt, ar);
	}
	return 0;
}#include <stdio.h>

int main(int argc, char const *argv[]) {
	double v, d, alt, ar;
   
	while (scanf("%lf%lf", &v, &d) == 2) {
		ar = 3.14 * (d / 2 * d / 2), alt = v / (3.14 * (d / 2 * d / 2));
		printf("ALTURA = %.2lf\nAREA = %.2lf\n", alt, ar);
	}
	return 0;
}