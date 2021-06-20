//PROGRAM TO CHECK AMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
int main()
{
  int n,sum=0,a,ncopy;
  printf("Enter the number:");
  scanf("%d",&n);
  ncopy=n;
  while(n>0)
  {
    a=n%10;
    sum=sum+(a*a*a);
    n=n/10;
  }
  if(sum==ncopy)
  {
    printf("%d is armstrong\n",ncopy);
  }
  else
  {
    printf("%d is not armstrong\n",ncopy);
  }
  return 0;
}
