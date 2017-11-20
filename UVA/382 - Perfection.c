#include<stdio.h>
int main()
{
    int i,j,k,m,n,x=0;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(x!=1)
        printf("PERFECTION OUTPUT\n");
        x=1;

        m=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
                m+=i;
        }
        if(m==n)
            printf("%5d  PERFECT\n",n);
        else if(m>n)
            printf("%5d  ABUNDANT\n",n);
        else if(m<n)
            printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
