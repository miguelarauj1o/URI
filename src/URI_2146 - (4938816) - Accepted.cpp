#include <stdio.h>

int main(int argc, char const *argv[])
{
	int v;
	while(scanf("%d", &v) == 1) printf("%d\n", v - 1);
	return 0;
}