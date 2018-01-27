#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int n, high, mainhigh;
    string str[1005];
    string ans;
    while (scanf("%d", &n))
    {
        if (n == 0)
        {
            break;
        }
        mainhigh = 0;
        for (int i = 0; i<n; i++)
        {
            cin >> str[i];
        }
        for (int i = 0; i<n; i++)
        {
            high = 0;
            for (int j = 0; j<n; j++)
            {
                if (str[i] == str[j])
                {
                    high++;
                }
                if (high>mainhigh)
                {
                    mainhigh = high;
                    ans = str[i];
                }
            }
        }
        cout << ans<<"\n";
    }
    return 0;
}