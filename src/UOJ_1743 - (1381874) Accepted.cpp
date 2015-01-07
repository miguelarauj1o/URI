#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[5], b[5], i;
	bool c = false;

	for (i = 0; i < 5; ++i)
		scanf("%d", &a[i]);

	for (i = 0; i < 5; ++i)
		scanf("%d", &b[i]);

	for (i = 0; i < 5; ++i)
		if(a[i] == b[i])
			c = true;

	if(c) puts("N");
	else puts("Y");

	return 0;
}