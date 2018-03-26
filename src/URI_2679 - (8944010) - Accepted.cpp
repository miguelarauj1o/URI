#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    (x % 2 != 0) ? printf("%d\n", x + 1) : printf("%d\n", x + 2);
    return 0;
}
