#include <cstdio>

#define FOR(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, tmp, res, v;
    
    while(scanf("%d %d", &n, &m) == 2)
    {
        res = 0;
        FOR(i, n)
        {
            tmp = 0;
            FOR(j, m)
            {
                scanf("%d", &v);
                if(v > 0)
                    tmp++;
            }
            
            if(tmp == m)
                res++;
        }
        
        printf("%d\n", res);
    }
    
	return 0;
}