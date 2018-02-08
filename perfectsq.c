#include<stdio.h>
int main()
{
  int n,sq,count;
  printf("\n Enter a number:");
  scanf("%d",&n);
  sq=n;
  while(sq>0)
  {
           sq=sq-count;
           count=count+2;
  }
  if(sq==0)
  {
        printf("\n Is a Perfect Square %d", n);
  }
  else
  {
         printf("\n  Not a Perfect Square %d ", n);
   }
      return 0;
}
