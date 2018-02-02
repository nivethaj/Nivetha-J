#include<stdio.h>
int main()
{
   int a,b;
   printf("\n Enter a number:");
   scanf("%d%d",&a,&b);
   while(a<=b)
   {
       if(a%7==0)
       printf("\n multiple of 7: %d",a);
       a=a=1;
   }   
   if(a==0)
   {
       printf("\n yes");
    }
    else
    {
       printf("\n no ");
    } 
   
}   
   
   
    
