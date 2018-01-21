#include<stdio.h>
void main()
{
char str1[20], str2[20];
int i=0, c=0;
printf("\nEnter first string :: ");
gets(str1);
printf("\nEnter second string :: ");
gets(str2);
{
printf("\n Strings are:\n\n");
puts(str1);
puts(str2);
{
if(str1[i]!=str2[i])
 c++;
 i++;
}
{
if(c==0)
puts("\nStrings are equal.\n");
else
puts("\nStrings are not equal.\n");
}
   	return 0;
}
