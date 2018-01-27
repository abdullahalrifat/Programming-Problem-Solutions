#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    while(scanf("%d %d",&a,&b))
    {
        if(a==0&&b==0)
        {
            break;
        }
        c=a+b;
        cout<<c<<"\n";
    }
    return 0;
}