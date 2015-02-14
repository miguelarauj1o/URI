#include <cstdio>
#include <cstring>

#define SC1(a) scanf("%d", &a)
#define FOR(i, n) for(int i = 1; i <= (n); ++i)

using namespace std;

typedef long long LL;

int pon[100015];
char nom[100015][15];

int main(int argc, char const *argv[])
{
	int n, r, sz;
 	LL tmpA, tmpB, tB, tA;

 	while(SC1(n) && n)
 	{
 		tmpB = tB = 0;
 		
 		FOR(i, n)
 		{
 			pon[i] = 0;
 			scanf("%s", nom[i]);
 			sz = strlen(nom[i]);

 			for(int j = 0; j < sz; j++)
 				pon[i] += nom[i][j];

 			tmpB += pon[i];
 			tB += pon[i] * i;
 		}

 		r = tA = tmpA = 0;
 		
 		FOR(i, n)
 		{
 			tB -= tmpB;
 			tmpB -= pon[i];
 			tmpA += pon[i];
 			tA += tmpA;
 			if(tA == tB){
 				r = i;
 				break;
 			}

 			if(tA > tB) 
 				break;
 		}

		if(r == 0) puts("Impossibilidade de empate.");
 		else printf("%s\n", nom[r]);
 	}
 	
 	return 0;
}