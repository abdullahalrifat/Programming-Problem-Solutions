#include <stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        c=a+b;
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}
