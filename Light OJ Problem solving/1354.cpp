//
// Created by abdullah on 2/3/17.
//
#include<cstdio>
#include<iostream>
using namespace std;
int a,b,c,d;
int m,n,x,y;
int convert(int num)
{
    int dec = 0, rem, base = 1;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
    return dec;
}
void compare(int i)
{
    cout<<"Case "<<i<<": ";
    if(a==convert(m)&&b==convert(n)&&c==convert(x)&&d==convert(y))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%d.%d.%d.%d",&m,&n,&x,&y);
        compare(i);
    }
    return 0;
}
