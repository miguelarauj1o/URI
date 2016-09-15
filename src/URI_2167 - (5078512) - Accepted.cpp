#include <stdio.h>

int main() {
    int n, tmp = 0, rpm, c = 0, a = 0, x = 1;
    
    scanf("%d", &n);
	while(n--) {
        scanf("%d", &rpm);
        c++;
        if(rpm < tmp && x == 1)
            a = c, x = 0;
        tmp = rpm;
    }
    
    printf("%d\n", a);
    return 0;
}