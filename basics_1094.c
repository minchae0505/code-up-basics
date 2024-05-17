#include <stdio.h>

int main(void) {
  int n, k;
  int a[10000]={};

  scanf("%d", &n);

  for(k=1; k <= n; k++)
  {
    scanf("%d", &a[k]);
  }
  for(k = n; k >= 1; k--)
  {
    printf("%d ",a[k]);
  }
  return 0;
}
