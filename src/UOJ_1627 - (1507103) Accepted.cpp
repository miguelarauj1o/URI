#include <cstdio>

#define SC1(a) scanf("%d", &a)
#define SC4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)

using namespace std;

int main(int argc, char const *argv[])
{
	int t, at, ad, bt, bd, h, ra, rb;

	SC1(t);

	while(t--)
	{
		SC4(at, ad, bt, bd);
		SC1(h);
		ra = rb = 0;

		while(true)
		{
			if(ra <= rb){
				h -= at;
				rb -= ra;
				ra = ad;

				if(h <= 0){
					printf("Andre\n");
					break;
				}
			}else{
				h -= bt;
				ra -= rb;
				rb = bd;

				if(h <= 0){
					printf("Beto\n");
					break;
				}
			}
		}
	}

	return 0;
}