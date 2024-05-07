#include <stdio.h>

int main(void) {
  int i;
  
  while(i!=0)
  {
    scanf("%d", &i);
    if(i==0)
    {
      break;  
    }
    else
    printf("%d\n", i);

    
  }
  return 0;
}