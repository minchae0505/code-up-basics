#include <stdio.h>

int main(void) {
  int arr1[23]={};
  int i, n, t;
  
  scanf("%d\n", &n);
  for(i=1; i<=n; i++) 
  {
    scanf("%d", &t); 
    arr1[t]=arr1[t]+1; 
  }
  for(i=1; i<=23; i++)
  {
    printf("%d ", arr1[i]); 
  }
  return 0;
}
