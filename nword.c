
#include<studio.h>
int n,sum=0;
{
printf("\n Enter a number:");
scanf("%d",&n);
while(n!=0)
{
sum=(sum * 10) + (n % 10);
n /= 10;
}
if(num != 0)
{
printf("\n convert number into word:",num);
}
return 0;
}
