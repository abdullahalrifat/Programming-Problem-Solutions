#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long n,sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(long i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        cout<<sum<<"\n";
        cout<<"\n";
    }
    return 0;
}