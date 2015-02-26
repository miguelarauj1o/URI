#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
 
#define SC1(a) scanf("%d", &a)
#define SC2(a, b) scanf("%d %d", &a, &b)
#define SC4(a, b, c, d) scanf("%d %s %d %s", &a, &b, &c, &d)
#define ZERO(x) memset(x, 0, sizeof(x))
#define FOR(i, n) for(int i = 0; i < (n); ++i)
 
using namespace std;
 
typedef struct
{
	char nome[21];
	int id, pon, vit, gol;
}times;
 
times arr[101];
 
int findv(int range, char * elmt)
{
	for (int i = 0; i < range; ++i)
		if(strcmp(arr[i].nome, elmt) == 0)
			return i;
 
	return -1;
}
 
bool cmp(times a, times b)
{
	if(a.pon > b.pon)
		return true;
	else if(a.pon < b.pon)
		return false;

	if(a.vit > b.vit)
		return true;
	else if(a.vit < b.vit)
		return false;

	if(a.gol > b.gol)
		return true;
	else if(a.gol < b.gol)
		return false;

	return a.id < b.id;
}
 
int main(int argc, char const *argv[])
{
	int t, n, m, x, y, pa, pb;
	char timeA[21], timeB[21];
 
	SC1(t);
 
	while(t--)
	{
		SC2(n, m);
		getchar();
		ZERO(arr);
 
		FOR(i, n)
		{
			gets(arr[i].nome);
			arr[i].id = i;
		}

		FOR(i, m)
		{
			cin >> x >> timeA >> y >> timeB;
		  
			pa = findv(n, timeA);
			pb = findv(n, timeB);
		  
			if(x > y){
				arr[pa].gol += x;
				arr[pb].gol += y;
				arr[pa].pon += 3;
				arr[pa].vit++;
			}else if(x < y){
				arr[pa].gol += x;
				arr[pb].gol += y;
				arr[pb].pon += 3;
				arr[pb].vit++;
			}else{
				arr[pa].gol += x;
				arr[pb].gol += y;
				arr[pa].pon += 1;
				arr[pb].pon += 1;
			}
		}
 
		stable_sort(arr, arr + n, cmp);
 
		FOR(i, n)
			printf("%s\n", arr[i].nome);
	}
 
	return 0;
}