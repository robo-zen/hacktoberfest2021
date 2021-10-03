
#include <stdio.h>

int main() 
{
  for(int i = 3 ; i > 0 ; i--)
 { 
   for(int j = 3 ; j >= i ; j--)
  { 
    printf("%d  ",j);
  }
  printf("\n");
 }
  return 0;
}
