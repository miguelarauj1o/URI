#include <cstdio>
using namespace std;

int main(int argc, char const *argv[]) {
    int n, x, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if(x > 2014) printf("%d A.C.\n", x - 2014);
        else printf("%d D.C.\n", 2015 - x);
    }
    return 0;
}