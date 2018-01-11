#include<studio.h>
 void main()
{
   int a;
   printf("\n Enter a numeric element:");
   scanf( "%d", &a );
   if( isdigit(a) )
        printf("\n It is a Numeric number:%d\n",a);
    else
        printf("\n It is not a Numeric number:%d\n",a);
    return 0;
}
