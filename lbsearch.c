#include<stdio.h>
int linsrch(int a[],int n,int key);
{
  for(i=0;i<n;i++)
  {
  if(a[i]==key)
  {

  }
}
return -1;
}

int binsrch(int a[],int key,int high,int low)
{
  while(low<=high){
    int mid=low+(high-low)/2;
    if(a[mid]==key)
    return mid;
    
  }
}
