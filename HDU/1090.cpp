#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d %d",&a,&b);
        c=a+b;
        cout<<c<<"\n";
        n--;
    }
    return 0;
}