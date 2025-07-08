#include<Stdio.h>
int main()
{
  int a[3]={1,2,3};
  int sum=0;
  for(int i=0;i<3;i++)
  {
      sum=sum+a[i]; 
  }
  printf("%d",sum);
  return 0;
}
