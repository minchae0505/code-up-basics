#include <stdio.h>

int main(void) {
  int score;
  scanf("%d", &score);
  if(score<101 && score>=90){
    printf("A");
  }
  else if(score<90 && score>=70){
    printf("B");
  }
  else if(score<70 && score>=40){
    printf("C");
  }
  else{
    printf("D");
  }
 
  return 0;
}