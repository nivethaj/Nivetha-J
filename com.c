#include <stdio.h>
void  main()
{
 int n, i, count1 = 0;
 printf("\n Enter a number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 if(n % i == 0 )
  {
   count1 = 1;
   break;
  }
 }
 if(count1 == 0)
  printf("no");
 else
  printf("yes");
 return 0;
}

