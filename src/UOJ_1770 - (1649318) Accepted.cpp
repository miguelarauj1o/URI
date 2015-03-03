#include <cstdio>

#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
#define for(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef struct
{
	bool check;
	int time;
}music;

music playlist[101];

int main(int argc, char const *argv[])
{
	int m, k, t, c, x;

	while(sc2(m, k) == 2)
	{
		t = c = 0;

		for(i, m)
		{
			sc1(playlist[i].time);
			playlist[i].check = false;
		}
			
		for(i, k)
		{
			sc1(x);
			if(c < m){
				t += playlist[x-1].time;
				if(!playlist[x-1].check){
					c++;
					playlist[x-1].check = true;
				}
			}
		}

		if(c < m) printf("-1\n");
		else printf("%d\n", t);
	}

	return 0;
}