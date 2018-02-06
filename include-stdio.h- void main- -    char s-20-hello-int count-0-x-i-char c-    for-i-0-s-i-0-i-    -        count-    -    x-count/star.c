#include<stdio.h>
void main()
{
   char s[20]="hello";int count=0,x,i;char c='*';
   for(i=0;s[i]!='\0';i++)
   {
       count++;
   }
   x=(count)/2;
   if(count%2==0)
{
    s[x]=c;
    s[x+1]=c;
    for(i=0;s[i]!=0;i++)
    {
        printf("%c",s[i]);
    }
}
else
{
    s[x]=c;
    for(i=0;s[i]!=0;i++)
    {
        printf("%c",s[i]);
    }
    
}
}
