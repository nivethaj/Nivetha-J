#include<studio.h>
void main();
{
int n;
printf("\n Enter a number:");
scanf("%d",&n);
if(n%2==0)
{
printf("\n Given number: ",n);
else
printf("\n Given number is less than even:",n-1);
}
return 0;
}
