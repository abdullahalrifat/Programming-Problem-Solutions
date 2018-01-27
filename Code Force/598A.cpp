#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    long long int sum=0;
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int j=0;
        sum=n*(n+1)/2;
        long long int temp=1;
        long long int powsum=0;
        while(temp<=n)
        {
            powsum+=temp;
            temp*=2;
        }
        cout<<sum-(powsum*2)<<endl;
    }
}
