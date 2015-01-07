#include <stdio.h>

int arr[10001];

int main(int argc, char const *argv[])
{
	int n, s, a, x, i;
	bool b;

	while(scanf("%d", &n) == 1)
	{
		s = 0; b = false;

		for (i = 0; i < n; ++i)
			scanf("%d", &arr[i]);

		for (i = 0; i < n; ++i)
			s += arr[i];

		if(s % n == 0){
			x = s/n;
			a = 1;
			b = true;

			for (i = 0; i < n && arr[i] < x; ++i)
				a += (x - arr[i]);
		}

		if(b) printf("%d\n", a);
		else printf("-1\n");
	}

	return 0;
}