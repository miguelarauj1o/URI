#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <string>
#include <vector>
#include <set>

using namespace std;

#define fi first
#define se second
#define sc2(a, b) scanf("%d%d", &a, &b)
#define sc3(a, b, c) scanf("%d%d%d", &a, &b, &c)

const int empty = 0x3f3f3f3f;
const int dx[8] = {1, 1, 1, 0, -1, -1, -1, 0};
const int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int a, b, c, n, m, k, lt;
int dp[25][25][2010];
typedef pair<int, int> ii;
set<pair<ii, int> > app;

bool lim(ii a) 
{
	if(a.fi < 0 || a.fi >= n || a.se < 0 || a.se >= m) return false;
	else return true;
}

int foo(ii u, int t) 
{
	if(t == lt)
		return 0;
	if(dp[u.fi][u.se][t] != empty)
		return dp[u.fi][u.se][t];
	
	int plus = app.count(make_pair(u, t));
	int _max = foo(u, t+1);
	ii v;

	for(int i = 0; i < 8; i++) 
	{
		v.fi = u.fi+dx[i];
		v.se = u.se+dy[i];
		
		if(lim(v))
			_max = max(_max, foo(v, t+1));
	}
	
	return dp[u.fi][u.se][t] = _max+plus;
}

int main(int argc, char const *argv[])
{	
	while(sc3(n, m, k) && n) 
	{	
		app.clear();
		lt = 0;
		
		for(int i=0; i<k; i++) 
		{
			sc3(a, b, c);
			a--, b--;
			
			app.insert(make_pair(ii(a, b), c));
			lt = max(lt, c + 1);
		}
		
		ii u;
		sc2(u.fi, u.se);
		u.fi--, u.se--;
		
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				memset(dp[i][j], 0x3f, sizeof(dp[i][j]));
	
		printf("%d\n", foo(u, 0));
	}
}