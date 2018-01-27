#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int sum,a,n;
    while(scanf("%d",&n)!=0)
    {
        if(n==0)
        {
            break;
        }
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum=sum+a;
        }
        cout<<sum<<"\n";
    }

    return 0;
}