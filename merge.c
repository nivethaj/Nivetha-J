
#include,stdio.h>
void main()
{
int n,i,j,high,low,mid;
printf("\n enter a sort array element:");
scanf("%d,"&n);
{
for(i=0;i<=high;i++)
for(j=0;j<n-1;j++_
{
 if(low < high)
{
      mid = (low + high) / 2;
      sort(low,mid);
      sort(mid+1,high);
      merging(low,mid,high);
 }
 }
 else
 { 
  printf("\n the array element is:");
 }
   return 0;
 }   
}
