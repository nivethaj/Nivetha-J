#include <stdio.h>
void main()
{
   int n,sum=0,r;
   printf("\n Enter a number:");
   scanf("%d",&n);
   while(n>0)
   {
       r=n%10;
       sum=sum*10+r ;
       n=n/10;
   }
   printf("\n Reverse a number:%d",sum);

}  
   
