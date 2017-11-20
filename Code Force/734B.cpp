#include<cstdio>
#include<iostream>
using namespace std;
int main()
{

    int sum1=256,sum2=32,total=0;//256,32
    int a,b,c,d;//2,3,5,6
    cin>>a>>b>>c>>d;
    while(a>0&&c>0&&d>0)
    {
        a--;
        c--;
        d--;
        total+=256;
    }
    while(b>0&&a>0)
    {
        a--;
        b--;
        total+=32;
    }

    cout<<total<<endl;
    return 0;
}

