#include <stdio.h>

int main(int argc, char const *argv[]) {
  int s, t, f;
  scanf("%d%d%d", &s, &t, &f);
  int sum = (s + t + f) % 24;
  if (sum < 0) sum = 24 + sum;
  printf("%d\n", sum);
  return 0;
}
