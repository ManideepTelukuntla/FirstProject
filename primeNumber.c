#include <stdio.h>
#include <math.h>

int main()
{
int a,m,flag=0;
printf("Enter an integer value :");
scanf("%d",&a);
m=n/2;
for(int i=0;i<m;i++)
{
  if(a%i==0)
  {
  printf("Not a prime")
  flag=1;
  break;
  }
}
if(flag==0)
printf("Prime");
return 0;
}
