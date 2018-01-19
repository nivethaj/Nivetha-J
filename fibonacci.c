#include<stdio.h>
void main()
{
  int i,n,t1=0,t2=1,series;
   {
    printf("Enter the number of series: ");
    scanf("%d", &n);
     printf("Fibonacci Series: ");
     for (i=1;i<=n;i++)
      {
        printf("%d",t1);
        series=t1+t2;
        t1=t2;
        t2=series;
       }
   }
    return 0;
}
