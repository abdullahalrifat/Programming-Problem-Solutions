#include <iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++)
    {
        int x,y;
        double on,tn,o,z;
        cin>>x>>y>>z;
        on=abs(a-x);
        tn=abs(b-y);
        double ans=sqrt(powf(on,2)+powf(tn,2));
        arr[i]=(ans/z);
    }
    sort(arr,arr+n);
    printf("%.20lf",arr[0]);
    return 0;
}

