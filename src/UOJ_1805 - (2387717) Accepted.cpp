#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned long long int a, b;
	scanf("%lli%lli", &a, &b);
	printf("%lli\n", (a + b) * ((b - a) + 1)/2);
	return 0;
}