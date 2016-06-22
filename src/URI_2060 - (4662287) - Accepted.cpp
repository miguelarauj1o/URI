#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, v, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
	
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &v);
		if (v % 2 == 0) m2++;
		if (v % 3 == 0) m3++;
		if (v % 4 == 0) m4++;
		if (v % 5 == 0) m5++;
	}

	printf("%d Multiplo(s) de 2\n", m2);
	printf("%d Multiplo(s) de 3\n", m3);
	printf("%d Multiplo(s) de 4\n", m4);
	printf("%d Multiplo(s) de 5\n", m5);

	return 0;
}#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, v, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
	
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &v);
		if (v % 2 == 0) m2++;
		if (v % 3 == 0) m3++;
		if (v % 4 == 0) m4++;
		if (v % 5 == 0) m5++;
	}

	printf("%d Multiplo(s) de 2\n", m2);
	printf("%d Multiplo(s) de 3\n", m3);
	printf("%d Multiplo(s) de 4\n", m4);
	printf("%d Multiplo(s) de 5\n", m5);

	return 0;
}