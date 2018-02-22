#include<stdio.h>
void main()
{
    int len,width,height;
    int area,vol;
    printf("\n Enter the value width,height,length:");
    scanf("%d%d%d",&len,&width,&height);
    area=2*(width*len+len+len*height+height*width);
    vol=len*width*height;
    printf("\n Surface area=%d",area);
    printf("\n Volume=%d",vol);
    return 0;
}
