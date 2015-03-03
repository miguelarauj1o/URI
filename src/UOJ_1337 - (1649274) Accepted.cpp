#include <cstdio>
#include <algorithm>

#define sc3(a, b, c) scanf("%d %d %d", &a, &b, &c)

using namespace std;

int hand[3];

int main(int argc, char const *argv[])
{
	int a, b, c;
	bool s, p;

	while(sc3(hand[0], hand[1], hand[2]) && hand[0])
	{
		sort(hand, hand + 3);
		a = hand[0], b = hand[1], c = hand[2];
		s = p = false;

		if(a == b && a == c) s = true;
		if(a == b || b == c) p = true;

		if(s){
			if(a == 13) printf("*\n");
			else printf("%d %d %d\n", a + 1, a + 1, a + 1);
		}else if(p){
			if(a == b){
				if(c == 13) printf("%d %d %d\n", 1, ++a, a);
				else printf("%d %d %d\n", a, a, c + 1);
			}else{
				if(c == 13){
					if(a == 12) printf("1 1 1\n");
					else printf("%d %d %d\n", a + 1, b, b);
				}else{
					if(a + 1 == b) printf("%d %d %d\n", b, b, a + 2);
					else printf("%d %d %d\n", a + 1, b, b);
				}
			}
		}else printf("1 1 2\n");
	}

	return 0;
}