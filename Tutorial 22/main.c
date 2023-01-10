#include <stdio.h>

int main() {
  int a = 10, b = 20, c = 30;
  if (a < b) {
    if (b < c) {
      printf("A is less than B & C.\n");
    } else {
      printf("A is less than B.\n");
    }
  } else if (a < c) {
    printf("A is less thanC.\n");
  } else {
    printf("None...\n");
  }
  return 0;
}