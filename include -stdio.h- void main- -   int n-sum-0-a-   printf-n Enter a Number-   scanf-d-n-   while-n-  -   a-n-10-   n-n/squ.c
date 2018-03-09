#include <stdio.h>
void main()
{
  int n,sum=0,a;
  printf("\n Enter a Number:");
  scanf("%d",&n);
  while(n)
 {
  a=n%10;
  n=n/10;
  sum=sum+(a*a);
  }  
  printf("\n The value is:%d",sum);
  return 0;
}  
  
