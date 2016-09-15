#include <stdio.h>

int main() {
    double n, r = 0.0;
    scanf("%lf", &n);
    while(n--)
        r += 2.0, r = 1.0/r;
    
	r += 1.0;
    printf("%.10lf\n", r);
    return 0;
}