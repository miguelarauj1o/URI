#include <cstdio>
#include <cmath>

using namespace std;

#define sc1(a) scanf("%d", &a)
#define fr(i,a,b) for(int i=(a); i < (b); i++)

int arr[1000010];

int main (int argc, char const* argv[]) 
{
	int t, n, k, c = 0, r, m;
	sc1(t);

	while(t--)
	{
		sc1(n);
		m = r = k = 0;

		fr(i,0,n) 
		{
			sc1(arr[i]); 
			m = fmax(m, arr[i]);
		}
		
		fr(i,0,n)
		{
			if(arr[i] == m) k++;
			else k = 0;
			r = fmax(r, k);
		}

		printf("Caso #%d: %d\n", ++c, r);
	}

	return 0;
}
