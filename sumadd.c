#include<stdio.h>
void main()
{
   int n,t,sum=0,r;
   printf("\n Enter an integer :");
   scanf("%d",&n);
   t = n;
   while (t != 0)
   {
      r=t%10; 
      sum=sum+r;
      t=t/10;
   }
   printf("Sum of digits of %d = %d\n", n, sum);
   return 0;
}
