#include<stdio.h>
int main()
{
  int a[50],b[50],c[50],i,n1,n2,n3;
  printf("Enter the size of the first array:");
  scanf("%d",&n1);
  printf("enter the array elements:\n");
  for(i=0;i<n1;i++)
  {
    scanf("%d",&a[i]);

  }
  printf("enter the size of the second array:");
  scanf("%d",&n2);
  printf("enter the array elements:\n");
  for(i=0;i<n2;i++)
  {
    scanf("%d",&b[i]);
  }
   n3=n1+n2;
   for(i=0;i<n1;i++)
   c[i]=a[i];
   for(i=0;i<n2;i++)
   c[i+n1]=b[i];
   printf("the merged array is:");
   for(i=0;i<n3;i++)
   {
    scanf("%d",&c[i]);
   }
printf("\nfinal array after sorting is");
for(i=0;i<n3;i++)
{
  int temp;
  for(int j=i+1;j<n3;j++)
  
}