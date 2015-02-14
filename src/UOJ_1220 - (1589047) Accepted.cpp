#include <cstdio>
#include <cmath>

#define SC1(a) scanf("%d", &a)
#define FOR(i, n) for(int i = 0; i < (n); ++i)
 
using namespace std;

typedef long long LL;
 
double arr[1001];
LL t, rep, m;

int main(int argc, char const *argv[])
{
	int n, resto;
	float aux;
 
	while(SC1(n) && n)
	{
		t = rep = 0;
		
		FOR(i, n)
		{
			scanf("%f", &aux);
			arr[i] = round(aux * 100.0);
			t += arr[i];
		}
 
		m = t / n;
		resto = t % n;
		
		FOR(i, n)
		{
			if(arr[i] > m){
				if(resto > 0){
					rep += arr[i] - m - 1;
					resto--;
				}else{
					rep += arr[i] - m;
				}
			}
		}

		printf("$%lld.%02lld\n", rep / 100, rep % 100);
	}
 
	return 0;
}