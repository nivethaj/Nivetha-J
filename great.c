#include<stdio.h>
void main()
{
   int a[10],i,great;
   printf("Enter a values:");
   for (i=0;i<10;i++)
   {
    scanf("%d", &a[i]);
   }
   great=a[0];
   for(i=0;i<10;i++)
   {
  if(a[i]>great)
  {
  great=a[i];
  }
  }
  printf("greatest number %d",great);
  return 0;
 }
