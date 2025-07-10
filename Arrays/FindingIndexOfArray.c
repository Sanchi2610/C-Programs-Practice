#include<stdio.h>
int main()
{
  int a[5]={2,22,1,4,55};
  int n=5,target=22,index=-1;
  for(int i=0;i<n;i++)
  {
      if(target==a[i])
      {
          index=i;
          break;
      }
  }
  if(index!=-1)
  {
  printf("%d is found at %d index",target,index);
  }
  else
  {
  printf("%d is not found at %d index",target,index);  
  }
  return 0;
}
