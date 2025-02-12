#include <stdio.h>

int avg(int x, int y) {
  int sum = x + y;
  return sum / 2;
}

int main() {
  int a;
  int b;

  scanf("%d %d", &a, &b);

  int c = avg(a, b);
  printf("average of %d and %d is %d\n", a, b, c);
  return 0;
}
