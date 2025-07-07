#include<stdio.h>
int main()
{
 int row,column;
 printf("enter the number of rows:");
 scanf("%d",&row);
 printf("enter the number of column:");
 scanf("%d",&column);
 int arr[row][column];
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<column;j++)
  {
    printf("enter element for (%d,%d)",i,j);
    scanf("%d",&arr[i][j]);
  }
 }

 for(int i=0;i<row;i++)
 {
  for(int j=0;j<column;j++)
  {
    printf("%d ",arr[i][j]);
  }
  printf("\n");
 }
 return 0;
}

