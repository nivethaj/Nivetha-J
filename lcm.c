#include <stdio.h>
void main()
{
    int a,b,i,gcd,lcm;
    printf("Enter two values: \n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            gcd=i;
    }
    printf("GCD of %d and %d is = %d",a,b,gcd);
    lcm=a*b/gcd;
    printf("\n lcm  is = %d",a,b,lcm);
    return 0;
}
