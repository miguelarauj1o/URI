#include <iostream>
#include <cstring>

#define SC1(a) scanf("%d", &a)
#define FOR(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

const char sp[6] = "AEIOS";

int main(int argc, char const *argv[])
{
	int t, sz, r;
	char s[32];
	bool b;

	SC1(t);

	while(t--)
	{
		scanf("%s", s);
		sz = strlen(s);
		r = 1;

		FOR(i, sz)
		{
			b = false;

			FOR(j, 5)
				if(s[i] == sp[j] || s[i] == tolower(sp[j]))
					b = true;

			if(b) r *= 3;
			else r *= 2;	
		}

		printf("%d\n", r);
	}

	return 0;
}