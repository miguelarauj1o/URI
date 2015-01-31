#include <cstdio>
#include <cstring>
#include <algorithm>

#define SC1(n) scanf("%d", &n)
#define SC4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define CLEAR(x) memset(x, 0, sizeof(x))
#define FOR(i, n) for(int i = 0; i < (n); ++i)
#define REP(i, a, b) for (int i = (a); i < (b); ++i)

using namespace std;

typedef struct
{
	int id, p, pro, con;
}times;

times arr[101];

bool cmp(times a, times b)
{
	float avg, bvg;
   	
   	if(a.p == b.p){
   		if(a.con == 0) avg = a.pro;   
		else avg = (float)a.pro/(float)a.con;
		if(b.con == 0) bvg = b.pro;
		else bvg = (float)b.pro/(float)b.con;
		
		if(avg == bvg){
			if(a.pro == b.pro){
			   	return a.id < b.id;
			}else{
			   	return a.pro < b.pro;
			}
		}else{
			return avg < bvg;
		}
   	}else{
	  	return a.p < b.p;
   	}
}

int main(int argc, char const *argv[])
{
	bool b = false;
	int n, x, y, z, w, h = 1, it;

	SC1(n);

	while(n)
	{
		if(b) printf("\n");
		b = true;

		CLEAR(arr);

		FOR(i, n)
		  	arr[i].id = (i + 1);

		it = (n * (n - 1)/2);

		FOR(i, it)
		{
		  	SC4(x, y, z, w);

		  	if(y > w){
				arr[x - 1].p += 2; arr[x - 1].pro += y; arr[x - 1].con += w;
				arr[z - 1].p += 1; arr[z - 1].pro += w; arr[z - 1].con += y;
		  	}else{
				arr[x - 1].p += 1; arr[x - 1].pro += y; arr[x - 1].con += w;
				arr[z - 1].p += 2; arr[z - 1].pro += w; arr[z - 1].con += y;
		  	}
		}

		stable_sort(arr, arr + n, cmp);
		reverse(arr, arr + n);

		printf("Instancia %d\n", h); h++;
		REP(i, 0, n)
		{
		  	printf("%d", arr[i].id);
		  	if(i != (n - 1)) printf(" ");
		}
		printf("\n");

		SC1(n);
	}

	return 0;
}