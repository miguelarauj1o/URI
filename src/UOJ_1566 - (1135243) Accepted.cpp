#include <cstdio>
#include <cstdlib>
#define MAX 230
using namespace std;

void counting_sort_mm(int *array, int n, int min, int max)
{
    int i, j, z;
    int range = max - min + 1;
    int *count = new int[range];
 
    for(i = 0; i < range; i++) count[i] = 0;
    for(i = 0; i < n; i++) count[ array[i] - min ]++;
 
    for(i = min, z = 0; i <= max; i++) {
      for(j = 0; j < count[i - min]; j++) {
        array[z++] = i;
      }
    } 
 
    free(count);
}
 
void counting_sort(int *array, int n)
{
  int i, min, max;
 
  min = max = array[0];
  for(i=1; i < n; i++) {
    if ( array[i] < min ) {
      min = array[i];
    } else if ( array[i] > max ) {
      max = array[i];
    }
  }
}
 
int main()
{
    int c, n, h, size;
    scanf("%d", &c);
 
    for (int i = 0; i < c; ++i)
    {
        scanf("%d", &n);
        int A[n + 1];
        size = sizeof A / sizeof A[0];
 
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &h);
            A[j] = h;
        }
 
        counting_sort_mm(A, n, 0, MAX);
 
        for (int j = 0; j < n; ++j)
        {
            printf("%d", A[j]);
            if(j != (n - 1))
                printf(" ");
        }
        printf("\n");
    }
 
    return 0;
}