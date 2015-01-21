#include <cstdio>

#define SC2(a, b) scanf("%d %d", &a, &b)

bool check(int v, int n)
{
	int p = 0, i;
	
	while(v)
	{
		for(i = 0; i <= v; i++, p += v) 
			if(p == n)
				return true; 

		p -= v;
		v--;
	}
	
	return false;
}

int main(int argc, char const *argv[])
{
	bool b;
	int n, v, i;
	
	while(SC2(n, v) && (n || v))
	{	
		b = false;
		
		for(i = 1; i <= v; i++) 
		{
			if(check(i, n)){
				b = true;
				break;
			}
		}

		printf("%s\n", b ? "possivel" : "impossivel");
	}
}