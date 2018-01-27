#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int sum,a,n,m;
    scanf("%d",&n);
    while(n)
    {
        cin>>m;
        sum=0;
        for(int i=0;i<m;i++)
        {
            cin>>a;
            sum=sum+a;
        }
        cout<<sum<<"\n";
        n--;
    }

    return 0;
}