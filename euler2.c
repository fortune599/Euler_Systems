#include <stdio.h>
#include <stdlib.h>
int main() {
  int a = 1;
  int b = 2;
  int sum;
  while (b < 4000000){
    if (!(b % 2)){
	sum += b;
      }
    b += a;
    a = b - a;
  }
  printf("%d\n", sum);
  return sum;
}
