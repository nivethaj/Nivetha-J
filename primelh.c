#include <stdio.h>
void main()
{
   int i,j,k,h,flag=0,count=0;
   printf("\n enter a number:");
   scanf("%d %d",&k,&h);
   for(i=k;i<=h;i+2)
   {
       for(j=2;j<=i/2;j++)
       {
           if(i%j!=0)
           
               flag=1;
               else
               flag=0;
       }
           if(flag==1)
           count++;
   }
       printf("%d",count);
}
 
