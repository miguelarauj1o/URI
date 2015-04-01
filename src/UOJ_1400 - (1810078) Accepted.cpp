#include <cstdio>

using namespace std;

#define sc3(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define for(i,a,n) for(int (i) = (a); (i) < (n); (i)++)

bool clap(int n);

int main(void)
{
	int n, m, k, p, curr, s;

	while(sc3(n,m,k) && (n || m || k))
	{
		p = s = 1;
		curr = 0;

		while(1)
		{
			curr++;

			if(p == m && clap(curr)){
				k--;
				if(k == 0){
					printf("%d\n", curr);
					break;
				}
			}

			p += s;

			if (p > n) {
				p = n - 1;
				s = -1;
			} else if (p == 0){
				p = 2;
				s = 1;
			}
		}
	}

	return 0;
}

bool clap(int n) 
{
	if(n % 7 == 0)
		return true;

	while (n) 
	{
		int r = n % 10;
		n /= 10;

		if (r == 7)
			return true;
	}

	return false;
}