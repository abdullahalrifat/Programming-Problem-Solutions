#include<stdio.h>
int main()
{
int n,m,i,o,j,ans,sum;
while(scanf("%d%d",&n,&m)==2 && m>0 && n>0)
{
    sum=0;
    printf("%d %d ",n,m);
    if(n>m)
    {
        o=m;
        m=n;
        n=o;
    }
for(i=n;i<=m;i++)
{
    ans=1;
    for(j=i;j!=1;j=j)
        {
            if(j%2==0)
            j=j/2;
            else
            j=3*j+1;
            ans=ans+1;
        }
    if(ans>=sum)
    sum=ans;
}
    printf("%d\n",sum);
}
return 0;
}
