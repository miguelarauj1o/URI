#include <stdio.h>

char arr[99999] = { 'F', 'A', 'C', 'E' };

int main(int argc, char const *argv[]) {
	int n, s = 0, t = 4;
	char r1[2], r2[2], r3[2], r4[2];
	
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%s%s%s%s", r1, r2, r3, r4);
		if (r1[0] == arr[t-1] && r2[0] == arr[t-2] && r3[0] == arr[t-3] && r4[0] == arr[t-4]) {
			t -= 4;
			if (t == 0)
				arr[0] = 'F', arr[1] = 'A', arr[2] = 'C', arr[3] = 'E', t = 4;
			s++;
		} else {
			arr[t] = r1[0], t++, arr[t] = r2[0], t++, arr[t] = r3[0], t++, arr[t] = r4[0], t++;
		}
	}
	
	printf("%d\n", s);
	return 0;
}#include <stdio.h>

char arr[99999] = { 'F', 'A', 'C', 'E' };

int main(int argc, char const *argv[]) {
	int n, s = 0, t = 4;
	char r1[2], r2[2], r3[2], r4[2];
	
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%s%s%s%s", r1, r2, r3, r4);
		if (r1[0] == arr[t-1] && r2[0] == arr[t-2] && r3[0] == arr[t-3] && r4[0] == arr[t-4]) {
			t -= 4;
			if (t == 0)
				arr[0] = 'F', arr[1] = 'A', arr[2] = 'C', arr[3] = 'E', t = 4;
			s++;
		} else {
			arr[t] = r1[0], t++, arr[t] = r2[0], t++, arr[t] = r3[0], t++, arr[t] = r4[0], t++;
		}
	}
	
	printf("%d\n", s);
	return 0;
}