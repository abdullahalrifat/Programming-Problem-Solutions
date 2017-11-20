#include <stdio.h>
int main()
{
    int i,j,n,m,max,x[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&x[j]);
        }
        max=0;
        for(j=0;j<m;j++)
        {
            if(x[j]>=max)
            {
                max=x[j];
            }
        }
        printf("Case %d: %d\n",i,max);
    }

    return 0;
}
