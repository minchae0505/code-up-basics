#include <stdio.h>

int main(void) {
  int i;
  scanf("%d", &i);

 
  if(i>0)
  {
    printf("plus\n");
    if(i%2==0)
    {
      printf("even\n");
    }
    else
    {
      printf("odd\n");
    }
  }

  if(i<0)
  {
    printf("minus\n");
    if(i%2==0)
    {
      printf("even\n");
    }
    else
    {
      printf("odd\n");
    }
  }
  
}