#include<stdio.h>
void main()
{
int i,j;
printf("\n Enter the Number:");
scanf("%d%d",&i,&j);
printf("\n Before Swapping : ",i,j);
{
 i = i ^ j;
 j = i ^ j;
 i = i ^ j;
}
printf("\n After Swapping : ",i,j);
return 0;
}
