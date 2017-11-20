#include <stdio.h>
int main()
{
    int i,j,t,k,p,n,a,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        for(l=1,j=k;l<=p;l++,j++)
        {
            if(j==n)
            {
                j=0;
            }
        }
        printf("Case %d: %d\n",i,j);
    }
    return 0;
}
