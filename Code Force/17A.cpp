#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k,i,j,finalcount,count,ln[1050],m=0,a=0,b=1,ii,jj,sum;
    scanf("%d %d",&n,&k);
    for(i=2;i<=n;i++)
    {
        for(j=2,count=0;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            ln[m]=i;
            m++;
        }
    }
    for(ii=0,finalcount=0;ii<m-1;ii++)
    {
        sum=ln[a]+ln[b]+1;
        for(jj=0;jj<m;jj++)
        {
            if(sum==ln[jj])
            {
                finalcount++;
            }
        }
        a++;
        b++;
    }
    if(finalcount>=k)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}