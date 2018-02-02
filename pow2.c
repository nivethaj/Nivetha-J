#include<stdio.h>
int main()
{
   int n,k,result=1;
   printf("\n Enter a number:");
   scanf("%d",&n);
   printf("\n Enter a power:");
   scanf("%d",&k);
   while(k!=0)
   {
       result*=n;
       --k;
   }
   printf("\n power of 2 : %d",result*2);
}   
   
