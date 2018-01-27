#include<cstdio>
#include<cstdlib>
int main()
{
    int n, m,sum,finalsum;
    while (scanf("%d %d", &n,&m) != EOF)
    {
        for (int i = 1,sum=0; i <= n; i++)
        {
            if (m-i >= 0)
            {
                m = m - i;
            }
            else
            {
                break;
            }
            if (i == n)
            {
                i = 0;
            }
        }
        printf("%d\n", m);
    }
    return 0;
}