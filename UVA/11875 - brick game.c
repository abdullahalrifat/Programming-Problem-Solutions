#include<stdio.h>
int main()
{
int n,t,a[100],i,j;
scanf("%d",&t);
 for(i=1;i<=t;i++)
  {
  scanf("%d",&n);
  for(j=0;j<n;j++)
  scanf("%d",&a[j]);
  printf("Case %d: %d\n",i,a[j/2]);
  }
  return 0;
}
