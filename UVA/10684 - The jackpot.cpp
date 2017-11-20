#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int tmp,mx,n,x;
    while(true)
    {
        cin>>n;
        if(n==0)break;
        mx=tmp=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            tmp+=x;
            if(tmp<0) tmp=0;
            mx=max(mx, tmp);
        }
        if(mx)  cout<<"The maximum winning streak is "<<mx<<"."<<endl;
        else cout<<"Losing streak."<<endl;
    }
    return 0;
}

