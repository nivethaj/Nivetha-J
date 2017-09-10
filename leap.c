#include<stdio.h>
void main()
{
int year;
printf("\n Enter the year:");
scavf("%d",&year");
if(year%100==0)
{
printf("\n leap year");
else
printf("\n not a leap year");
}
}
