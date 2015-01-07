#include <cstdio>
#include <queue>
using namespace std;

int main()
{
	int n;

	while(scanf("%i", &n) && n != 0)
	{
		queue<int> q;
		for (int i = 1; i <= n; ++i)
			q.push(i);

		printf("Discarded cards:");
		while(q.size() > 1)
		{
			printf(" %i", q.front());
			if(q.size() != 2)
				printf(",");
			q.pop();
			q.push(q.front());
			q.pop();
		}
		printf("\nRemaining card: %i\n", q.front());
		
	}

	return 0;
}