#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b){
  int c;
  if(c==0){
    return 0;
  }
  c=a+b;
  return c;
}
int main() {
  int a=0;
  while(a<10){
    if(a==3){
      continue;
    }
    if(a==6){
      break;
    }
  }
  printf("%d",sum(10,20));
  goto L1;
  printf("Hello\n");
  printf("2\n");
  L1:
  printf("Codewings\n");
  exit(0);
  printf("Mahesh\n");
  }