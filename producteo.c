#include<studio.h>
void main()
{
int n,i,even=0,odd=0;
printf("\n Enter a number : ");
scanf("%d",&n);
{
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
    {
     even=even+i;
     else
     odd=odd+i;
    }
 printf("\n even number:%d",n);
 printf("\n odd number:%d",n);
} 
