#include<stdio.h>
int main()
{
    int a,n,k;
    while(scanf("%d %d",&n,&k)==2 && k>1)
    {
        a=n;
        while(n>=k)
        {
            a=a+(n/k);
            n=(n/k)+(n%k);
        }
        printf("%d\n",a);
    }
    return 0;
}
