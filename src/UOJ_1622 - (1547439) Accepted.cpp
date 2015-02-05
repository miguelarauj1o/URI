#include <cstdio>
#include <cstring>
#include <iostream>

#define SC2(a, b) scanf("%d %d", &a, &b)
#define FOR(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

char l[1008], ol[1008];

int fcycle(int k, int n) {
	int aux = 0, c = 0;
	
	do {
		aux = (aux + k) % n;
		c++;
	} while(aux);
	
	return c;
}

int main(int argc, char const *argv[])
{
	int n, q, k, m, t, p;

	while(SC2(n, q) && (n || q))
	{
		cin >> ol;

		FOR(i, q)
		{
			SC2(k, m);
			strcpy(l, ol);

			m %= (fcycle(k, n) * 2);
			p = 0;

			while(m--)
			{
				l[p] = (l[p] == 'o' ? 'x' : 'o');
				p = (p + k) % n;
			}

			cout << l << '\n';
		}
	}

	return 0;
}