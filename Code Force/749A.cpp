//
// Created by abdullah on 2/2/17.
//
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,tmp;
    cin>>n;
    cout<<n/2<<endl;
    if(n%2!=0)
        tmp=n/2-1;
    else
        tmp=n/2;
    for(int i=1;i<=tmp;i++)
    {
        cout<<2<<" ";
    }
    if(n%2!=0)cout<<3<<" ";
    cout<<endl;
    return 0;
}