#include <stdio.h>

int main(){

    int n = 0;
    int a = 1;
    int res = 0;

    do{

        scanf("%d", &n);

        if(n == 0){
            return 0;
        }

        for(a = 1; a <= n; a++){
            res = res + (a * a);
        }

        printf("%d\n", res);
        res = 0;

    }while(n != 0);

    return 0;
}
