#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    unsigned long long n,m;
    while(true)
    {
        cin>>n>>m;
        if(n==0&&m==0)break;
        if(n>m)
            swap(n,m);
        if(n>(m+n)/2)
        {
            n=n+m-n;
        }
        unsigned long long ans=1,res=1;
        for(unsigned long long i=1;i<=n;i++)
        {
            ans=ans*(n+m-i+1)/i;
        }
        cout<<ans<<endl;
    }
}