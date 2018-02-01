#include<stdio.h>
void  main()
{
  int a,b,sum;
  printf("\n Enter a number:");
  scanf("%d%d",&a,&b);
  sum=a+b;
  printf("\n Sum is : %d",sum);
  if(sum%2==0)
  {
      printf("\n even");
  }
  else
  {
      printf("\n odd");
   }
}  
