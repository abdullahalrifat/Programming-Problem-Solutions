#include<stdio.h>
int main()
{
    int tc,i;
    double v1,v2,v3,a1,a2,t1,t2,ans1,ans2;
    scanf("%d",&tc);

    for(i=1;i<=tc;i++)
    {
        scanf("%lf",&v1);
        scanf("%lf",&v2);
        scanf("%lf",&v3);
        scanf("%lf",&a1);
        scanf("%lf",&a2);
        t1=v1/a1;
        t2=v2/a2;
        ans1=((v1*t1)-.5*a1*t1*t1)+((v2*t2)-.5*a2*t2*t2);
        if(t1>t2)
        {
            ans2=t1*v3;
        }
        else
        {
            ans2=t2*v3;
        }
        printf("Case %d: %lf %lf\n",i,ans1,ans2);
    }
    return 0;
}