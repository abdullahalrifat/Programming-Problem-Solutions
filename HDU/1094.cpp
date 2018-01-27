#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int sum,a,n,m;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        while(n)
        {
            cin>>a;
            sum=sum+a;
            n--;
        }
        cout<<sum<<"\n";
    }

    return 0;
}