#include <stdio.h>
int main()
{
   int i,j,diff;
   printf("\n Enter a number of warriors in kabali:");
   scanf("%d",&i);
   printf("\n Enter a number of oppents in Ninjas:");
   scanf("%d",&j);
   if(i<j)
   {
   diff=i-j;
   printf("\n %d",diff);
   }
   else
   {
   printf("\n kabali is not greater than ninjas ");
   }
   return 0;
}   
