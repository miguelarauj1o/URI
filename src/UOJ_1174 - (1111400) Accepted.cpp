#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    double d;
    vector<double> v;

    for (int i = 0; i < 100; ++i)
    {
        scanf("%lf", &d);
        v.push_back(d);
    }

    for (int i = 0; i < 100; ++i)
    {
        if(v[i] <= 10)
            printf("A[%i] = %g\n", i, v[i]);
    }

}