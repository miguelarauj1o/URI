#include <cstdio>
#include <cmath>
 
using namespace std;

#define LMAX 21
#define CMAX 31
#define sc1(a) scanf("%d", &a)
#define sc2(a,b) scanf("%d %d", &a, &b)
#define for(i,a,n) for(int (i) = (a); (i) < (n); (i)++)

struct Pedido
{
  int tempo;
  int pizzas;
};

struct Pedido arr[LMAX];
int matriz[LMAX][CMAX];

int main(void)
{
  int n, p;

  while(sc1(n) && n)
  {
    sc1(p);

    for(i, 1, n + 1)
        sc2(arr[i].tempo, arr[i].pizzas);

    for(i, 0, n + 1)
    {
      for(j, 0, p + 1)
      {
        if(i == 0 || j == 0){
          matriz[i][j] = 0;
        }else{
          if(arr[i].pizzas > j) matriz[i][j] = matriz[i - 1][j];
          else matriz[i][j] = fmax(matriz[i - 1][j - arr[i].pizzas] + arr[i].tempo, matriz[i - 1][j]);
        }
      }
    }

    printf("%d min.\n", matriz[n][p]);
  }

    return 0;
}