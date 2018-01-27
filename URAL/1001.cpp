#include <stdio.h>
#include<math.h>
double n,ans[1000000];
int i=0;
int main()
{
    while(scanf("%lf",&n)!=EOF)
    {
        ans[i]=sqrt(n);
        i++;
    }
    i=i-1;
    while(i>=0)
    {
        printf("%.4lf\n",ans[i]);
        i--;
    }
    return 0;
}