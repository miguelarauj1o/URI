#include <cstdio>
#include <cstring>

using namespace std;

double calculate(char c)
{
	if(c == 'W') return 1.00;
	else if(c == 'H') return 0.5;
	else if(c == 'Q') return 0.25;
	else if(c == 'E') return 0.125;
	else if(c == 'S') return 0.0625;
	else if(c == 'T') return 0.03125;
	else return 0.015625;
}

int main(int argc, char const *argv[])
{
	int c, l, i;
	double s;
	char str[1000001];

	while(gets(str) && str[0] != '*')
	{
		s = c = 0;
		l = strlen(str);

		for (i = 0; i < l; ++i)
		{
			if(str[i] == '/'){
				if(s == 1.00)
					c++;
				s = 0;
			}else{
				s += calculate(str[i]);
			}
		}

		printf("%d\n", c);
	}

	return 0;
}