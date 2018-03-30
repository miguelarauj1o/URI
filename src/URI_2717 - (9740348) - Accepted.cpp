#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, a, b;
  scanf("%d%d%d", &n, &a, &b);
  (a + b > n) ? puts("Deixa para amanha!") : puts("Farei hoje!");
  return 0;
}
