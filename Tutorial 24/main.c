#include <stdio.h>

int main() {
  int a = 1;
  while (a < 1) {
    printf("%d\n", a);
  }
  do {
    printf("%d\n", a);
  } while (a < 1);

  return 0;
}