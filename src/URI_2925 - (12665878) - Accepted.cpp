#include <iostream>
#define MAX 62
using namespace std;

long long seq[MAX];

void buildSequence();
void invertSequence();
long long getInvertedNumber(long long v);

int main() {
	int n;
	
	buildSequence();
	invertSequence();
	while (cin >> n) {
		if (n == 0) {
			puts("0");
		} else {
			cout << seq[n] << endl;
		}
	}
	return 0;
}

void buildSequence() {
	seq[0] = seq[1] = 1;
	for (int i = 2; i < MAX; i++)
		seq[i] = seq[i-1] + seq[i-2];
}

void invertSequence() {
	long long a, b;
	for (int i = 7; i < MAX; i++) {
		a = getInvertedNumber(seq[i-1]);
		b = getInvertedNumber(seq[i-2]);
		seq[i] = a + b;
	}
}

long long getInvertedNumber(long long v) {
	long long rev = 0, rem;
	
	while (v != 0) {
		rem = v % 10;
		rev = rev * 10 + rem;
		v /= 10;
	}
	
	return rev;
}
