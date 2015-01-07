#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

bool compare(int a, int b) { return (a > b); }

int main(int argc, char const *argv[])
{
	int n, g, s, r, c, i, sz;
	bool b;

	while(scanf("%d %d", &n, &g) == 2)
	{
		c = 0;
		v.clear();

		for (i = 0; i < n; ++i)
		{
			scanf("%d %d", &s, &r);
			if(s > r) c += 3;
			else v.push_back(s - r);
		}

		sort(v.begin(), v.end(), compare);
		sz = v.size();
		b = false;

		for (i = 0; i < sz; ++i)
		{
			if(b){
				if(v[i] == 0) c++;
				else break;
			}else{
				if(g <= 0) b = true;

				if((1 - v[i]) <= g){
					g -= (1 - v[i]);
					c += 3;
				}else if((0 - v[i]) == g){
					c++;
					g -= (0-v[i]);
				}else{
					b = true;
				}
			}
		}

		printf("%d\n", c);
	}

	return 0;
}