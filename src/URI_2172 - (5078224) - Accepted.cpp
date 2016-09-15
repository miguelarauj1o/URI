#include <stdio.h>

int main() {
	long long int x, m;
	while(scanf("%lld%lld", &x, &m) == 2 && (x || m))
        printf("%lld\n", x * m);
	return 0;	
}