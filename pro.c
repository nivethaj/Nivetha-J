#include <stdio.h>
void main()
{
  int n,p=1,r=0;
  printf("\n Enter a number:");
  scanf("%d",&n);
  while(n!='\0')
    {
        r=n%10;
        p=p*r;
        n=n/10;
    }
    printf("%d",p);
}
