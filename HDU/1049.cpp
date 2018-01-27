#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n, u, d, mun,i;
    while (scanf("%d",&n))
    {
        if(n==0)
        {
            break;
        }
        scanf("%d %d",&u, &d);
        mun = 0;
        i=0;
        while(1)
        {
            i=i+u;
            mun++;
            if(i>=n)
            {
                break;
            }
            i=i-d;
            mun++;
        }
        printf("%d\n", mun);
    }
    return 0;
}