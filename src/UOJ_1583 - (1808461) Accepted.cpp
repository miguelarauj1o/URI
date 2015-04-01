#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

#define sc1(a) scanf("%d", &a)
#define sc2(a,b) scanf("%d %d", &a, &b)
#define for(i,a,n) for(int (i) = (a); (i) < (n); (i)++)

int n, m, sz;
struct toV { int i, j; };
const int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

char map[64][64];
bool visi[64][64];
toV run[1000001];

void flood(int a, int b)
{
	if(visi[a][b])
		return;

	int na, nb;
	visi[a][b] = true;
	map[a][b] = 'T';

	for(i,0,4)
	{
		na = a + dir[i][0], nb = b + dir[i][1];
		if((na >= 0 && na < n) && (nb >= 0 && nb < m))
			if(map[na][nb] == 'T' || map[na][nb] == 'A')
				flood(na, nb);
	}
}

int main(void)
{
	while(sc2(n,m) && (n || m))
	{
		sz = 0;
		getchar();
		memset(visi, 0, sizeof visi);

		for(i,0,n)
		{
			for(j,0,m)
			{
				cin >> map[i][j];
				if(map[i][j] == 'T'){
					run[sz].i = i, run[sz].j = j;
					sz++;
				}
			}
			getchar();
		}

		for(i,0,sz)
			flood(run[i].i, run[i].j); 			

		for(i,0,n)
		{
			for(j,0,m)
				printf("%c", map[i][j]);
			printf("\n");
		}

		printf("\n");
	}

	return 0;
}