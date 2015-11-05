#include <stdio.h>

int main(int argc, char const *argv[]) {
    int h, m, s, v, t = 0;
    double d = 0;
    char c;
    
    while(scanf("%d:%d:%d", &h, &m, &s) != EOF){
        scanf("%c", &c);
        if(c == ' '){
            if(t != 0) 
                d += (double)(((h * 3600 + m * 60 + s) - t) * v) / 3600;
            scanf("%d%*c", &v);
            t = h * 3600 + m * 60 + s;
        }else{
            d += (double)(((h * 3600 + m * 60 + s) - t) * v) / 3600;
            printf("%02d:%02d:%02d %.2lf km\n", h, m, s, d);
            t = h * 3600 + m * 60 + s;
        }
    }

    return 0;
}