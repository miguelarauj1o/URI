#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, la, lb, sa, sb;
	scanf("%d%d%d%d%d", &n, &la, &lb, &sa, &sb);
	if (la <= n && n <= lb && sa <= n && n <= sb) printf("possivel\n");
	else printf("impossivel\n");
	return 0;
}