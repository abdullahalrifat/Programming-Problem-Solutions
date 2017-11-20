#include<stdio.h>
int main()
{
    long int n,r,k;
    int i;
    for(i=1;i<=10002;i++)
    {
        scanf("%ld %ld",&r,&n);
        if((r==0)&&(n==0))
        {
             break;
        }
        k=(r-1)/n;
        if(k>26)
        printf("Case %d: impossible\n",i);
        else
        printf("Case %d: %ld\n",i,k);

    }
    return 0;
}
