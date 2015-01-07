#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	int b, n, x, d, c, v;
	bool check;

	while(scanf("%i %i", &b, &n) && (b || n))
	{
		int reserva[23];
		check = false;

		for (int i = 1; i <= b; ++i)
		{
			scanf("%i", &x);
			reserva[i] = x;
		}

		for (int i = 1; i <= n; ++i)
		{
			scanf("%i %i %i", &d, &c, &v);
			reserva[d] -= v;
			reserva[c] += v;
		}

		for (int i = 1; i <= b; ++i)
		{
			if(reserva[i] < 0){
				check = true;
				break;
			}
		}

		if(check == true){
			puts("N");
		}else{
			puts("S");
		}
	}

	return 0;
}