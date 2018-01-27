//
// Created by abdullah on 2/2/17.
//
#include<cstdio>
#include<iostream>
using namespace std;
void print(int n,int i)
{
    cout<<"Case #"<<i<<": "<<n;
    int cnt=0;
    for(int i=2;cnt< 2;i++)
    {
        if(n%i==0)
        {
            cout<<" = "<<i<<" * "<<n/i;
            cnt++;
        }
    }
    cout<<endl;
}
int main()
{

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int test;
        cin>>test;
        print(test,i);
    }
    return 0;
}