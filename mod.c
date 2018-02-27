#include <stdio.h>
void main()
{
  int a,b,c,sum;
  printf("\n Enter a number:");
  scanf("%d%d%d",&a,&b,&c);
  sum=a*b%c;
  printf("\n The mod value is:%d",sum);
  return 0;
}  
  
