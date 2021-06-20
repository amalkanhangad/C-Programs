/*Program to print inverted pyramid of '&'using nested loops,
when the user enters how many rows to be printed.
  Eg:if 3 is given as input,
     the output will be :     &  &  &  &  &
                                 &  &  &
                                    &                          */
#include<stdio.h>
int main()
{
  int n;
  printf("Enter number of rows:");
  scanf("%d",&n);
  for(int i=2*n-1,j=0;i>0;i-=2,j++)
  {
    for(int k=j;k>0;k--)
    {
      printf("   ");
    }
    for(int k=i;k>0;k--)
    {
      printf("&  ");
    }
    printf("\n");
  }
  return 0;
}
