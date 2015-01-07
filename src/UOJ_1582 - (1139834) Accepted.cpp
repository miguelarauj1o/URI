#include <cstdio>
#include <cstdlib>
#define min(m,n) ((m) < (n) ? (m) : (n))
using namespace std;

int x, y, z, h, co, ca, a;

int mdc(int m, int n)
{
    a = min(abs(m),abs(n));
    while ((m % a != 0) || (n % a != 0))
    	a--;
    return a;
}

int main()
{
	while(scanf("%i %i %i", &x, &y, &z) != EOF)
	{
		if(x >= z && x >= y){ 
			h = x; co = y; ca = z;
		}else if(y >= x && y >= z){
			h = y; co = x; ca = z;
		}else if(z >= x && z >= y){
			h = z; co = x; ca = y; 
		}

		printf("tripla");
		if(h * h == (ca * ca + co * co)){
			printf(" pitagorica");
			if(mdc(mdc(x,y),z)==1)
				printf(" primitiva");
		}
		printf("\n");
	}

	return 0;
}