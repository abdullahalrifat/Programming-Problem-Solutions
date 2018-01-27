#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int k,l,m,n,d,s=0;
    cin>>k>>l>>m>>n>>d;
    for (int i = 1; i <= d; ++i)
    {
        if (!(i % k && i % m && i % n && i % l))
        {
            s++;
        }
    }
    cout<<s<<endl;
    return 0;
}