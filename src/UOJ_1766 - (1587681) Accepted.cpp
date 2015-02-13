#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string.h>
 
#define SC1(a) scanf("%d", &a)
#define SC2(a, b) scanf("%d %d", &a, &b)
#define ZERO(x) memset(x, 0, sizeof(x))
#define FOR(i, n) for(int i = 0; i < (n); ++i)
 
using namespace std;
 
typedef struct
{
    char no[101];
    int pe, id;
    float al;
}rena;
 
rena arr[10010];
 
bool compare_strings (char * c1, char * c2) 
{
	int sz = (strlen(c1) > strlen(c2) ? strlen(c1) : strlen(c2));

	for (int i = 0; i < sz; ++i)
	{
		if(c1[i] < c2[i]) return true;
		if(c1[i] > c2[i]) return false;
	}

	return true;
}
 
bool cmp(rena a, rena b)
{
    if(a.pe == b.pe){
        if(a.id == b.id){
            if(a.al == b.al){
            	if(compare_strings(a.no, b.no)) return a.no > b.no;
            	else return a.no < b.no;
            }else{
                return a.al > b.al;
            }
        }else{
            return a.id > b.id;
        }
    }else{
        return a.pe < b.pe;
    }
}
 
int main(int argc, char const *argv[])
{
    int t, n, m, c = 1;
 
    SC1(t);
 
    while(t--)
    {
        SC2(n, m);
        ZERO(arr);
 
        FOR(i, n)
            cin >> arr[i].no >> arr[i].pe >> arr[i].id >> arr[i].al;
 
        stable_sort(arr, arr + n, cmp);
        reverse(arr, arr + n);
 
        printf("CENARIO {%d}\n", c);
        c++;
 
        FOR(i, m)
        {
            printf("%d - ", (i + 1));
            cout << arr[i].no << endl;
        }
    }
 
    return 0;
}