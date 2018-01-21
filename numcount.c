#include<stdio.H>
void main()
{
 int n,r,count=0;
 printf("\nEnter any number\n");
 scanf("%d", &n);
{
 while(n>0)
  {
    n= n/10;
    count=count+1;  
  }
} 
 printf("\n Number of Digits in a Given Number = %d", count);
 return 0;
}
