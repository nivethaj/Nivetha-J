#include <stdio.h>
#include<string.h>
void main()
{
   int i,j,l,l1,count=0;
   char a[100],b[100];
   scanf("%s %s",a,b);
   l1=strlen(a);
   l=strlen(b);
   if(l==l1)
   {
   for(i=0;i<l1;i++)
   {
     if(a[i]!=b[i])
     count++;
   }
   if(count==1)
   
       printf("yes");
   
   else
   printf("no");
   }
   else
   printf("no");

    return 0;
}
