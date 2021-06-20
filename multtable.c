//PROGRAM TO DISPLAY MULTIPLICATION TABLE 
#include<stdio.h>
void main()
{
  int n,i,range;
  printf("Enter the number:");
  scanf("%d",&n);
  printf("Enter range:");
  scanf("%d",&range);
  i=1;
  while(i<=range)
  {
    printf("%d X %d = %d\n",i,n,i*n);
    i++;
  }
}
