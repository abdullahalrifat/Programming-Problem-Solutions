#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n, arrays[100000], time;
    while (scanf_s("%d", &n))
    {
        time = 0;
        if (n == 0)
        {
            break;
        }
        for (int i = 0; i<n; i++)
        {
            cin >> arrays[i];
        }
        for (int i = 0; i<n; i++)
        {
            if (i == 0)
            {
                for (int j = 0; j<arrays[i]; j++)
                {
                    time = time + 6;
                }
                time = time + 5;
            }
            else
            {
                if (arrays[i]>arrays[i - 1])
                {
                    for (int j = arrays[i - 1]; j<arrays[i]; j++)
                    {
                        time = time + 6;
                    }
                    time = time + 5;
                }
                else
                {
                    for (int j = arrays[i - 1]; j>arrays[i]; j--)
                    {
                        time = time + 4;
                    }
                    time = time + 5;
                }
            }
        }
        cout << time<<"\n";
    }
    return 0;
}