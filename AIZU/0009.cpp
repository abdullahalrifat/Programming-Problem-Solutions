#include<cstdio>
#include<cstdlib>
#include<cmath>
bool ifprime(int i);
int numbers[31];
int nn[31];
int num = 0;
int o;
int main()
{
    int n, count;
    bool ans;
    while ((scanf("%d", &n)) != EOF)
    {
        o = 1;
        for (int i = 0; i <= num; i++)
        {
            if (n == numbers[i])
            {
                printf("%d\n", nn[i]);
                o = 0;
                break;
            }
        }
        if(o==1)
        {
            count = 0;
            for (int i = 2; i <= n; i++)
            {
                ans = ifprime(i);
                if (ans == true)
                {
                    ++count;
                }
            }
            printf("%d\n", count);
            numbers[num] = n;
            nn[num] = count;
            num++;
        }
    }

    return 0;
}
bool ifprime(int i)
{
    int m = (int)sqrt(i);
    for (int j = 2; j <= m; j++)
    {
        if (i% j == 0)
        {
            return false;
        }
    }
    return true;
}