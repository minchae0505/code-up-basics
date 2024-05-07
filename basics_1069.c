#include <stdio.h>

int main(void) {
  char eng;
  scanf("%c", &eng);
  switch(eng){
    case 'A': printf("best!!!");
              break;
    case 'B': printf("good!!");
              break;
    case 'C': printf("run!");
              break;
    case 'D': printf("slowly~");
              break;
    default: printf("what?");
  }

  return 0;
}