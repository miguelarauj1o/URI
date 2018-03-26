#include <iostream>
using namespace std;

int sum(long x) {
	int res = 0;

	while(x) {
		res += (x % 10);
		x /= 10;
	}

	return res;
}

int main(int argc, char const *argv[]) {
	int a, b;
	
	while(cin >> a >> b) {

		printf("%d", sum(b));
		if (b % 3 == 0) printf(" sim\n");
		else printf(" nao\n");
	}

	return 0;
}