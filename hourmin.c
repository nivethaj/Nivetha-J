#include<stdio.h>
void main()
{
int hour,min=120
printf("\n Enter a hour and min :\n");
scanf("%d %d ", &hour &min);
while(min>60)
{
hour++;
min=min-60;
}
printf("\n The hour and min is:\n");
return 0;
}
