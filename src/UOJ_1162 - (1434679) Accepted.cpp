#include <cstdio>
#include <algorithm>

using namespace std;

int train[51];

int lookup(int l, int x)
{
    for (int i = 0; i < l; ++i)
        if(train[i] == x)
            return i;
 
    return -1;
}

int main(int argc, char const *argv[])
{
	int n, l, x, i, c, tmp;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &l);
		for (i = 0; i < l; ++i)
			scanf("%d", &train[i]);

		i = 0; c = 0;

		while(i < l)
		{
			while(train[i] != (i + 1))
			{
				tmp = lookup(l, i + 1);
				swap(train[tmp - 1], train[tmp]);
				c++;
			}
			i++;
		}

		printf("Optimal train swapping takes %d swaps.\n", c);
	}

	return 0;
}