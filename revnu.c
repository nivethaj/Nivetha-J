#include <stdio.h>
void main()
{
   int n,sum=0,s;
   printf("\n Enter a number:");
   scanf("%d",&n);
   while(n>0)
   {
       s=n%10;
       sum=sum*10+s ;
       n=n/10;
   }
   printf("\n Reverse a number:%d",sum);

}  
   
