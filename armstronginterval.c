#include <stdio.h>
int main()
{
    int low, high, temp,n;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: ", low, high);
    while (low < high)
    {
    for(temp = 1; temp <= low/2; temp++)
    {
    while(temp>0)
    {
      n=n%10;
      temp=temp+(n*n*n);
      n=n/10;
    }
    }
    if(n==temp)
    {
    printf("armstrong between two interval");
    else
    printf("armstrong not between two interval"):
    }
   }
   
      
