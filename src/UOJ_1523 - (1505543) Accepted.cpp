#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>

#define SC2(a, b) scanf("%d %d", &a, &b)
#define ZERO(x) memset(x, 0, sizeof(x))

using namespace std;

typedef stack<int> SI;

SI p;
int in[1000010], out[1000010], k;

int main(int argc, char const *argv[])
{
	int n, c, s;
	
	while(SC2(n, k) && n)
	{	
		int lt = 0;	
		ZERO(in); ZERO(out);
		
		for(int i = 1; i <= n; i++)
		{
			SC2(c, s);	
			in[c] = i;
			out[s] = i;
			lt = max(lt, s+1);
		}
		
		while(!p.empty()) 
			p.pop();
		
		int i;
		
		for(i = 1; i < lt; i++)
		{
			if(out[i]){
				if(p.empty() || p.top() != out[i]) break;
				else p.pop();
			}
			
			if(in[i]){
				if((int)p.size() < k) p.push(in[i]);
				else break;
			}
		}

		printf("%s\n", i == lt ? "Sim" : "Nao");
	}
}
