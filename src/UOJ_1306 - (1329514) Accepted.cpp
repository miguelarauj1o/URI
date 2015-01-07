#include <cstdio>

int main(int argc, char const *argv[])
{
    int a, b, c = 1, count;

    while(scanf("%i %i", &a, &b) && (a || b))
    {
        if(b >= a){
            printf("Case %i: 0\n", c);
        }else{
            count = 0;
            while(true)
            {
                if(count * b >= a || count > 30) break;
                count++;
            }

            if(count <= 27) printf("Case %i: %i\n", c, count - 1);
            else printf("Case %i: impossible\n", c);
        }

        c++;
    }
    return 0;
}