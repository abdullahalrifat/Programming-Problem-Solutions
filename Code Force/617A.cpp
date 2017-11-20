#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int x,ans=0;
    while(cin>>x)
    {
        ans=0;
        if(cin.eof())
        {
            break;
        }
            while(x>0)
            {
                if(x>=5)
                {
                    x=x-5;
                    ans++;
                }
                else if(x==4)
                {
                    x=x-4;
                    ans++;
                }
                else if(x==3)
                {
                    x=x-3;
                    ans++;
                }
                else if(x==2)
                {
                    x=x-2;
                    ans++;
                }
                else
                {
                    x=x-1;
                    ans++;
                }
            }
        cout<<ans<<endl;
    }
    return 0;
}

