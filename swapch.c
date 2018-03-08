#include<stdio.h>
void main()
{
   char s[50],a; 
   int len,i;
   scanf("%s",s);
   len=strlen(s);
  if(len%2==0)
 {
    for(i=0;i<len;i+=2)
  {
    a=s[i];
    s[i]=s[i+1];
    s[i+1]=a;
  }
  printf("%s",s);
 }
 else
  {
   for(i=0;i<(len-1);i+=2)
  {
   a=s[i];
   s[i]=s[i+1];
   s[i+1]=a;
  }
  printf("%s",s);
 }
   return 0;
 }
