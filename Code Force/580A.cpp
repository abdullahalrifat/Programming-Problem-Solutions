#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
long long a[1000000];
int main()
{
    long long  n, i, num, cnt = 0, avg, high=0;
    while (scanf("%I64d", &n) != EOF)
    {
        cnt = 0;
        high = 0;
        for (int i = 0; i<n; i++)
        {
            scanf("%I64d", &a[i]);
        }
        num = a[0];
        for (int i = 0; i<n; i++)
        {
            if (a[i] >= a[i - 1])
            {
                ++cnt;
            }
            else
            {
                cnt = 1;
            }
            if (cnt > high)
            {
                high = cnt;
            }
        }
        printf("%I64d\n", high);
    }
    return 0;
}

