#include<stdio.h>

int main()
{
  int n;
  printf("Enter the number of coloumns of Triangle : ");
  scanf("%d",&n);
  for(int i=1 ; i <= n ; i++)
  {
   
   int z=n-i;
   while( z != 0)
   {
     printf("\t");
     z--;
   }
   int k=0;
   while ( k != 2*i - 1  )
   {
     printf("*\t");
     k++;
   }
   printf("\n");
  }
return 0;
} 