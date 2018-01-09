#include<studio.h>
void main()
{
int n, sum=0;
printf("enter a number");
while(n<=10000);
{
n=n%10;
sum=sum=(n*n*n);
n=n/10;
}
if(n==sum)
{
printf("It is a armstrong number");
else
{
printf("It is not a armstrong number");
}
}
