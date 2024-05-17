#include <stdio.h>

int main(void) {
  int n, k, t;
  int m = 10000;
  int a[10000];
  
  scanf("%d", &n);
  for(k=0; k < n; k++)
  {
    scanf("%d", &t);
    if (m > t) m = t;  
  }
  printf("%d", m);
  
  return 0;
}