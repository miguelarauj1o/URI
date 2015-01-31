#include <cstdio>

#define SC1(a) scanf("%d", &a)
#define FOR(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int main(int argc, char const *argv[])
{
	int n, x, p, k, f, r;
	bool b;

	while(SC1(n) && n)
	{
		p = k = f = r = 0;
		b = true;

		FOR(i, n)
		{
			SC1(x);

			if(x == 1){
				if(b){
					f = k;
					b = false;
				}else{
					r += (k / 2);
				}
				
				k = 0;
			}else{
				k++;
			}
		}

		r += ((k + f) / 2);

		if(b) r += (k % 2);
		
		printf("%d\n", r);		
	}

	return 0;
}