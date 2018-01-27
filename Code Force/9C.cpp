#include<cstdio>
#include<iostream>
using namespace std;
int count=0;
int n;
void cnt(int a)
{
    if(a>n)
    {
        return;
    }
    count++;
    cnt(a*10);
    cnt(a*10+1);
}
int main()
{
    cin>>n;
    cnt(1);
    cout<<count<<endl;
}