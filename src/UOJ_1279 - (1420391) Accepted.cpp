#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	long i, l, le, f, m4, m15, m55, m100, m400;
	char y[1000001];
	bool b = false;

	while(gets(y))
	{
		if(b) printf("\n");
		b = true;
		le = f = m4 = m15 = m55 = m100 = m400 = 0;

		l = strlen(y);

		for (i = 0; i < l; ++i)
		{
			m4 = ((m4 * 10) + (y[i] - '0')) % 4;
			m15 = ((m15 * 10) + (y[i] - '0')) % 15;
			m55 = ((m55 * 10) + (y[i] - '0')) % 55;
			m100 = ((m100 * 10) + (y[i] - '0')) % 100;
			m400 = ((m400 * 10) + (y[i] - '0')) % 400;
		}

		if((m4 == 0 && m100 != 0) || (m400 == 0)){
			printf("This is leap year.\n");
			le = f = 1;
		}

		if(m15 == 0){
			printf("This is huluculu festival year.\n");
			f = 1;
		}

		if(le == 1 && m55 == 0) printf("This is bulukulu festival year.\n");
		if(f == 0) printf("This is an ordinary year.\n");
	}

	return 0;
}