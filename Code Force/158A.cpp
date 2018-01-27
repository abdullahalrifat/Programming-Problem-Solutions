#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,k,arrays[110],big,counts;
    while(1)
    {
        big=0;
        counts=0;
        cin>>n;
        if(cin.eof( ))
        {
            break;
        }
        cin>>k;
        for(int i=1;i<=n;i++)
        {
            cin>>arrays[i];
        }
        big=arrays[k];
        for(int i=1;i<=n;i++)
        {
            if(arrays[i]>0)
            {
                if(arrays[i]>=big)
                {
                    counts++;
                }
            }
        }
        cout<<counts<<"\n";
    }
    return 0;
}
