#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int sum,a,b,n,m;
    cin>>n;
    while(n)
    {
        sum=0;
        cin>>m;
        while(m)
        {
            cin>>a;
            sum=sum+a;
            m--;
        }
        cout<<sum<<"\n";
        if(n>1)
            cout<<"\n";
        n--;
    }

    return 0;
}