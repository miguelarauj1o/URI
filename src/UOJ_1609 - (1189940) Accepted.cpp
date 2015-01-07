#include <cstdio>
#include <set>
using namespace std;

int main()
{
	int t, n, x, count;
	set<int> set;
	std::set<int>::iterator it;
	scanf("%i", &t);

	for (int i = 0; i < t; ++i)
	{
		scanf("%i", &n);
		count = 0;
		set.clear();

		for (int i = 0; i < n; ++i)
		{
			scanf("%i", &x);
			const bool is_in = set.find(x) != set.end();
			
			if (!is_in) {
 				set.insert(x);  
 				count++;
			}
			
		}

		printf("%i\n", count);
	}

	return 0;
}