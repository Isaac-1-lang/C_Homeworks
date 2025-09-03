#include <stdio.h>
#include <stdlib.h>
int main() {
  int n=5, i, *ptr, sum = 0;
  ptr = (int*)malloc(5*sizeof(int));
  for(int i=0;i<n;i++) {
  printf("%d\n\n",*(ptr+i));
  }
  return 0;
}