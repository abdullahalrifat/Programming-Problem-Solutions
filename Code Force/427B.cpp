 #include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int a[200001];
int b[200001];
int main()
{
    int n,t,c;
    while(cin>>n>>t>>c)
    {
        memset(b,0,sizeof(b));
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            if(x<=t)           
                a[i]=1;
            b[i]=b[i-1]+a[i];
        }
        int s=0;
        for(int i=1; i+c-1<=n; i++)
            if(b[i+c-1]-b[i-1]==c)
                s++;
        cout<<s<<endl;
    }
    return 0;
}
