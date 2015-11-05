#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n, r;

    while(scanf("%d", &n) && n != 0) {
        r = 0;

        while(n > 1) {
            if(n % 3 == 0) {
                r += n / 3;
                n /= 3;
            }else {
                r += (n / 3) + 1;
                n = (n / 3) + 1;
            }
        }

        printf("%d\n", r);
    }

    return 0;
}