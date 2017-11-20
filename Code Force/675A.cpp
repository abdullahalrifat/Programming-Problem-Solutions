// Created by abdullah on 2/3/17.
//

#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    b-=a;
    if(c==0&&b!=0)puts("NO");
    else if(c==0&&b==0) puts("YES");
    else if(b%c!=0)cout<<"NO"<<endl;
    else if(b/c<0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
