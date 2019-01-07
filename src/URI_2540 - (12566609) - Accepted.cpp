#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int v, i, x;
	float n, f;
	
	while(cin >> n) {
		v = 0;
		for (i = 0; i < n; i++) {
			cin >> x, v += x;
		}
		
		f = n/3 * 2;
		(v >= (int)(ceil(f))) ? puts("impeachment") : puts("acusacao arquivada");
	}
	
	return 0;	
}