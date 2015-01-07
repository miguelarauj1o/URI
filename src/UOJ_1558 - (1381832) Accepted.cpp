#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, j, s;
	bool b;

	while(scanf("%d", &n) == 1){
		b = false;
		i = 0;
		j = sqrt(n);

		while(j >= i){
			s = pow(i,2) + pow(j,2);

			if(s == n){
				b = true;
				break;
			}else if(s < n){
				i++;
			}else{
				j--;
			}
		}

		if(b) puts("YES");
		else puts("NO");
	}

	return 0;
}