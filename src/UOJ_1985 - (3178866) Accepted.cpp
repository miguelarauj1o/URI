#include <stdio.h>

int main(int argc, char* argv[]) {
    int n, p, q;
    float t = 0;
    scanf("%d", &n);

    while(n--) {
		scanf("%d%d", &p, &q);
		if(p == 1001) t += (1.5 * q);
		else if(p == 1002) t += (2.5 * q);
		else if(p == 1003) t += (3.5 * q);
		else if(p == 1004) t += (4.5 * q);
		else t += (5.5 * q);
    }

    printf("%.2f\n", t);

    return 0;
}