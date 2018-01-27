#include<cstdio>
#include<iostream>
using namespace std;
long long int n,m,a,counts1,counts2,i;
int main()
{
    while(1)
    {
        counts1=0;
        counts2=0;
        cin>>n;
        if(cin.eof( ))
        {
            break;
        }
        cin>>m;
        cin>>a;
        counts1=n/a;
        n=n%a;
        if(n>0)
        {
            counts1++;
        }
        counts2=m/a;
        m=m%a;
        if(m>0)
        {
            counts2++;
        }
        printf("%I64d\n",counts1*counts2);
    }
    return 0;
}