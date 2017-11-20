
// Created by abdullah on 2/9/17.
//
#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
   int a,b;
    cin>>a>>b;
    int ans=(a+b)/3;
    ans=min(ans,a);
    ans=min(ans,b);
    cout<<ans<<endl;

}

