#include<stdio.h>
int main()
{
    int i,max,data[10];
    printf("\n Enter a num : );
    scanf("%d",&data[i]);
    for(i=0;i<10;i++)
    max = data[0];
    for(i=1;i<10;i++) if(data[i] > max) max = data[i];
    printf("%d",max);
    return 0;
}
