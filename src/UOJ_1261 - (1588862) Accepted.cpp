#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <map>

#define SC1(a) scanf("%d", &a)
#define SC2(a, b) scanf("%d %d", &a, &b)
#define FOR(i, n) for(int i = 0; i < (n); ++i)
  
using namespace std;

typedef map<string, int> MI;
  
MI mapa;

int main(int argc, char const *argv[])
{
	int m, n, v, s;
	string w;
	  
	while(SC2(m, n) == 2)
	{
		FOR(i, m)
		{
			cin >> w >> v;
			mapa[w] = v;
		}

		FOR(i, n)
		{
			s = 0;
			while(cin >> w && w.compare(".") != 0)
				s += mapa[w];

			printf("%d\n", s);
		}
	}
}