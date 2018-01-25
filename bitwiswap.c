#include<stdio.h>
void main()
{
int m,n;
printf("\n Enter the Number:");
scanf("%d%d",&m,&n);
printf("\n Before Swapping : ",m,n);
{
 m=m^n;
 n=m^n;
 m=n^m;
}
printf("\n After Swapping : ",m,n);
return 0;
}
